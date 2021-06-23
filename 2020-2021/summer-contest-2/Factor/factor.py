# Submission by Kevin Shen

import math 
factors = []
def main(n): 
      
    for i in range(2,int(math.sqrt(n))+1): 
          
        while n % i== 0: 
            factors.append(int(i))
            n = n / i 
    if n >= 2: 
        factors.append(int(n))
          
n = input()
main(int(n))
for x in factors:
    print(x, end=' ')
