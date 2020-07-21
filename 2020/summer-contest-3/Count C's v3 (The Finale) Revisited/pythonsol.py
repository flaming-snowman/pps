# Submitted by Arnav Vora

n = int(input())
cs = input()
runningTotal = 0
total = 0
currentPart = '' # stores the last letter of the SEE/SEA string
for i in cs:
    if i == 'C':
        if runningTotal >=3:
            total+= runningTotal
        runningTotal = 0
        total+=1
        currentPart = ''
    elif i == 'S':
        if runningTotal>=3:
            total+=runningTotal
        runningTotal = 1
        currentPart = 'S'
    elif i == 'E' and currentPart in ['S','E']:
        runningTotal+=1
        currentPart = 'E'
    elif i == 'A' and currentPart in ['A','E']:
        runningTotal+=1
        currentPart = 'A'
    else:
        if runningTotal>=3:
            total+=runningTotal
        runningTotal = 0
        currentPart = ''
if runningTotal>=3:
        total+=runningTotal
print(total)
