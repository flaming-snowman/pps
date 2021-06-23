n = input()
if int(n) == 0:
    print('0')
else:
    numbers = input()
    numbers = numbers.split()
    for i in range(0,len(numbers)):
        numbers[i] = int(numbers[i])
    print(sum(numbers))

