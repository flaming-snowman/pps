nums = input().split()
n=int(nums[0])
m=int(nums[1])
k=int(nums[2])
i=1
factors = []
while (i*i < n):
    if (n%i==0):
        factors.append(i)
        factors.append(n//i)
    i+=1
if(i*i==n):
    factors.append(i)
factors.sort()
ans=1
for i in range(m):
    ans*=factors[-i-1] # take largest elements from back of array
    ans%=k

print(ans)
