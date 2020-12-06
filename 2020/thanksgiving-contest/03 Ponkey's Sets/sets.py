# Submitted by Andrew Ma

n = int(input())
for i in range(n): #for each line
    group = list(input().split(' '))
    correct = 0
    for i in range(4): #for each char
        check = ""
        for card in group: #for each card
            check = check + card[i]
        if check[0] == check[1] and check[0] == check[2] and check[1] == check[2]:
            correct += 1
        elif check[0] != check[1] and check[0] != check[2] and check[1] != check[2]:
            correct += 1
        else:
            print("NO")
            break
        if correct == 4:
            print("YES")
