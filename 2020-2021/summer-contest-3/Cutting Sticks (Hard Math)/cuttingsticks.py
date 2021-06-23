# Modified submission orginally by Kevin Shen

nm = input()
lengths = input()
nm = nm.split()
lengths = lengths.split()
out = 0
for x in lengths:
    if int(x) > int(nm[1]):
        out += int(x)//int(nm[1])
        if int(x) % int(nm[1]) == 0:
            out -= 1
print(out)
