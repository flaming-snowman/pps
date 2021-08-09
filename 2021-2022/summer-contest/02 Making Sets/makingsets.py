# Submitted by Kevin Shen

n = int(input())

values = [["g", "r", "p"], ["o", "s", "d"], ["s", "o", "f"], ["1", "2", "3"]]

for _ in range(n):
    out = ""
    line = list(map(str, input().split(" ")))
    for i in range(4):
        if line[0][i] == line[1][i]:
            out+=line[0][i]
        else:
            cur = [line[0][i], line[1][i]]
            for val in values[i]:
                if val not in cur:
                    out+=val
    print(out)
            
