# O(N^M) submitted by Andrew Ma

n, m = map(int, input().split(" "))
gas = list(map(int, input().split(" ")))
stores = []
for i in range(n):
    line = list(map(int, input().split(" ")))
    stores.append(line)
totals = [9999999999999999999999999999]
def findPrice(base_m, total, traveled):
    if (base_m + 1 >= m):
            totals.append(total)
            return
    if total > min(totals):
        return
    for i in range(n):
        t = traveled.copy()
        if i in t:
            findPrice(base_m + 1, total + stores[i][base_m + 1], t)
        else:
            t.append(i)
            findPrice(base_m + 1, total + stores[i][base_m + 1] + gas[i], t)

findPrice(-1, 0, [])
print(min(totals))
