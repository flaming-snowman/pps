# My solution

n,m = map(int, input().split())
p,t,k = map(int, input().split())
boxes = list(map(int, input().split()))
sums = [0]
cSum = 0
for i in range (n):
    cSum += boxes[i]
    sums.append(cSum)
for i in range (m):
    x,y,z = map(int, input().split())
    if sums[y] - sums[x - 1] > p - ((z // t) * k):
        print("NO")
    else:
        print("YES")
