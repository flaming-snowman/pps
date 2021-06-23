# Submitted by Nathan Dai
# The C++ solution may be more understandable, even if you don't know C++

from itertools import combinations, chain

class Store:
    def __init__(self, gas: int, items: list):
        self.gas = gas
        self.items = items
    
    def __repr__(self) -> str:
        return str(self.gas) + ' : ' + str(self.items)

n, m = map(int, input().split())
gas = list(map(int, input().split()))
stores = list(zip(gas, [list(map(int, input().split())) for _ in range(n)]))
stores = [Store(i[0], i[1]) for i in stores]

cheapest = float('inf')
for combination in chain(*[list(combinations(stores, i)) for i in range(1, n + 1)]):
    price = sum([store.gas for store in combination])
    price += sum([min(grocery) for grocery in zip(*[j.items for j in combination])])

    if (price < cheapest): 
        cheapest = price

print(cheapest)
