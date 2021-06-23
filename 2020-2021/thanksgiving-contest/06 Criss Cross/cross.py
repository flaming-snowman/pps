# Submitted by Andrew Ma

n = int(input())
perm = list(map(int, input().split(" ")))
ans = 0
for i in range(n):
    for num in range(i, len(perm)):
        if perm[i] > perm[num]:
            ans += 1
print(ans)
