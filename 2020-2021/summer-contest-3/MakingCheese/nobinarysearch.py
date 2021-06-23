# Submitted by Arnav Vora
# I have no idea what it does but it passed the testcases

import math
def relu(n):
    if n>0:
        return n
    return 0
def asolve(mod,req,total):
    return ((-3*mod+math.sqrt(9*mod**2-4*(-1*req**2+req*mod-2*mod*total)))/2)
def asum(initial,final,d):
    newFinal = (final//d)*d
    return int(final + (initial+newFinal)*(newFinal-initial+d)/(2*d))
n = int(input())
for i in range(n):
    k,x,m = map(int,input().split())
    if x>=m:
        print(m)
    else:
        newX = (x//k + 1)*k
        f = asolve(k,newX,m)
        fFloor = int(k*math.floor(f/k))
        floorSum = asum(newX,fFloor,k)
        if floorSum+k-1<m:
            print(fFloor+k)
        else:
            print(fFloor+relu(m-floorSum))

