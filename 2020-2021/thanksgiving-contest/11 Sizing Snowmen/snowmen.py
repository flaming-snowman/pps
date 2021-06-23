# Submission by Nathan Dai
# This code works by creating a dictionary of sets

n, m = map(int, input().split())

snowmen = {}
for _ in range(n):
    input() # k
    snowballs = list(map(lambda n: 2 * int(n), input().split()))
    height = sum(snowballs)
    for snowball in snowballs:
        try:
            snowmen[snowball].add(height)
        except:
            snowmen[snowball] = {height}

queries = [tuple(map(int, input().split())) for _ in range(m)]
for height, diameter in queries:
    try:
        if (height in snowmen[diameter]):
            print('YES')
        else:
            print('NO')
    except:
        print('NO')

