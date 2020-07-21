n=int(input())
nums=input().split()
ops=input().split()
expression=nums[0]
for i in range(n-1):
    if(ops[i]=='^'):
        ops[i]='**'
    elif(ops[i]=='/'):
        ops[i]='//'
    expression+=ops[i]+nums[i+1]
print(eval(expression))
