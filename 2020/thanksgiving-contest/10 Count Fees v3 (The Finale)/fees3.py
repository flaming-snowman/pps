# My solution

n=int(input())
s=input()
ans=0

A = [0] # prefix sum of As
numA = 0
for i in range(n):
	if(s[i]=='A'):
		numA+=1
	A.append(numA)

# find position of first PH
foundP=False
for PH in range(n):
	if(foundP and s[PH]=='H'):
		break
	elif(s[PH]=='P'):
		foundP=True
numE=0
for i in range(PH, n):
	if(s[i]=='E'):
		numE+=1
		ans=max(ans, 2+numE+A[n]-A[i])
if(ans < 4): # min length for valid PHEE/PHEA
	ans=-1


# find position of first F
for F in range(n):
	if(s[F]=='F'):
		break
	F+=1
numE=0
for i in range(F, n):
	if(s[i]=='E'):
		numE+=1
		ans=max(ans, 1+numE+A[n]-A[i])
if(ans < 3): # min length for valid FEE/FEA
	ans=-1
	
print(ans)

