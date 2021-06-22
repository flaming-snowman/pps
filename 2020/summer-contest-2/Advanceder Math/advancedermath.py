# Modified submission originally by Alex Proshkin

n, m = list(map(int, input('').split()))
if (n == 0):
   print(0)
   exit()

total = list(map(int, input('').split()))
expsum = [1] if m == 0 else [0]
for i in range(1, max(total) + 1):
    expsum.append(expsum[-1] + i ** m)

answer = 0
for num in total:
    answer += expsum[num]

print( answer % 1000000007 if n != 0 else -1 )
