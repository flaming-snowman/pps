x=input().split()
a=[int(i) for i in x]
s=input().lower()
sum=0
for i in range(a[0]):
    if(s[i].isalpha()):
        sum+=(ord(s[i])-ord('a'))*a[2]
    else:
        sum+=(int(s[i])+26)*a[2]
sum+=a[0]*a[1]
print(sum)
