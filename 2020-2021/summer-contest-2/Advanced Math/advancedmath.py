# Modified submission originally by Arnav Vora

n = int(input())
if n==0:
    print(0)
else:
    nums = list(map(int,input().split()))
    product = 1
    for i in nums:
      product *= (i%(10**9+7))
      product %=(10**9+7)
    print(product)
