N, K = map(int, input().split())
essays = [] # bool array represents whether assignment needs to be done
classes = [[] for i in range(N+1)] # store assignment number for each class in an array
num = 0 # number of assignments left
a = 0 # assignment number
firstx = 0 # how many of the first k assignments are already done

for i in range(K):
	t, x = map(int, input().split())
	if (t == 1):
		essays.append(True)
		classes[x].append(a)
		a += 1
		num += 1
	elif (t == 2):
		for k in classes[x]:
			if(essays[k]):
				num -= 1
				essays[k] = False
		classes[x].clear()
	elif (t == 3):
		if(x > firstx):
			for k in range (firstx, x):
				if(essays[k]):
					num -= 1
					essays[k] = False
			firstx = x
	print(num)

for k in classes[N]:
	if(essays[k]):
		print("NO")
		exit()
print("YES")
