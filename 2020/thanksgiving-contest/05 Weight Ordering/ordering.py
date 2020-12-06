# Modified submission originally by Arnav Vora

n,m = map(int,input().split())
weights = list(map(int,input().split()))
boxes = []
for i in range(n):
    items = list(map(int,input().split()))
	boxweight = sum([items[i] * weights[i] for i in range(len(items))])
    boxes.append((boxweight, i+1))
boxes.sort()
for i in boxes:
    print(i[1])
