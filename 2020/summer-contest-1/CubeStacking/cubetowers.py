#Python binary search solution submitted by Arnav

def binarySearchAdd(num):
  if (len(stacks)==0):
    return -2
  l = 0
  r = len(stacks)-1
  while (r-l>1):
    mid = (r+l)//2
    if (num<=stacks[mid][-1]-2):
      r = mid
    else:
      l = mid
  if (num<=stacks[l][-1]-2):
    return l
  elif (num<=stacks[r][-1]-2):
    return r
  else:
    return -1
def binarySearchSwap(num):
  l = -1
  r = len(stacks)-1
  while (r-l>1):
    mid = (r+l)//2
    if (num<=stacks[mid][-1]):
      r = mid
    else:
      l = mid
  #print(l,r)
  return r
def addElement(num):
  #print(num)
  i = binarySearchAdd(num)
  if i <=-1:
    stacks.append([num])  
  else:
    stacks[i].append(num)
    j = binarySearchSwap(num)
    temp = stacks.pop(i)
    stacks.insert(j,temp)
  #print(stacks)


n = int(input())
nums = list(map(int,input().split()))
stacks = []
for i in range(n):
  addElement(nums[i])
#print(len(stacks),stacks)
print(len(stacks))
