# Submitted by Justin Chen

def s(x, y, z):
    set = True
    for i in range (4):
        a = x[i]+y[i]+z[i]
        if a.count(x[i]) == 2 or a.count(y[i]) == 2 or a.count(z[i]) == 2: 
            set = False
    if set:
        return(1)
    else:
        return(0)

n = int(input())
m = list(map(str,input().split()))
ans = 0

if n < 3:
    print(0)
    exit()

for i in range (n-2):
    for j in range(i+1, n-1):
        for k in range (j+1, n):
            ans += s(m[i], m[j], m[k])
            
print (ans)


# Submitted by Selena Qiao

import itertools

N = int(input())
cards = input().split()
count = 0

for subset in itertools.combinations(cards, 3):
  properties = [0,0,0,0]
  for i in range(4):
    if (subset[0][i] == subset[1][i]) and (subset[1][i] == subset[2][i]):
      properties[i]=1
    elif (subset[0][i] != subset[1][i]) and (subset[1][i] != subset[2][i]) and (subset[0][i] != subset[2][i]):
      properties[i]=1
  if (properties[0] and properties[1] and properties[2] and properties[3]):
    count+=1

print(count)
