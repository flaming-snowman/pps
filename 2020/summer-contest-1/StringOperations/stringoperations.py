#Jack's original solution

l1 = list(map(int, input().split(" ")))
n = l1[0]
m = l1[1]
string = input()
found = True
ans = 0
while found:
  found = False
  for i in range (26):
    cur = ""
    for c in range (m):
      cur += chr(i + 97)
    prevLength = len(string)
    string = string.split(cur)
    string = "".join(string)
    if len(string) < prevLength:
      found = True
      ans += (prevLength - len(string)) / m
print(int(ans))
