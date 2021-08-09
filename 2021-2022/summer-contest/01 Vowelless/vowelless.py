# Submitted by Andrew Ma

N = input()
s = input()
vowels = ["a", "e", "i", "o", "u"]

for v in vowels:
    s = s.replace(v, "")

print(len(s))
