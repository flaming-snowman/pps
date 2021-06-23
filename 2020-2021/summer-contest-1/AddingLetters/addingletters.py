a=input().split()
s=input().lower()
sum=0
for i in range(int(a[0])):
    if(s[i].isalpha()):
        sum+=ord(s[i])-ord('a')
	else:
        sum+=int(s[i])+26
sum+=int(a[0])*int(a[1])
print(sum)
