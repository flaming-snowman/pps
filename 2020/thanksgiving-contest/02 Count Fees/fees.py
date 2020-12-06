# Submitted by David Xia

n = int(input())
if n > 0:
    string = input()
count = 0
i = 0
while i < n - 2:
    if string[i] == "F" and string[i+1] == "E" and string[i+2] == "E":
        count = count + 1
        i = i + 3
    else:
        i = i + 1
print(count)


# Submitted by Alex Proshkin

if input() == "0":
    print(0)
else:
    print(input().count("FEE"))
