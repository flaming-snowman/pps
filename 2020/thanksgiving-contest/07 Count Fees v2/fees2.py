# Submitted by Selena Qiao

import math

inputs = input().split()
N = int(inputs[0])
M = int(inputs[1])
if (N>0):
    string = input()
ecounter=0
acounter=0
what = 10**9 + 7

i = 0

def dothings(e,a,m):
      if(e>0 and a>0):
        if((e%2 == 0) and (a%2 == 0)):
          m = math.ceil(m/2)
        elif((e%2 == 1) and (a%2 == 0)):
          m+= e
          m = math.ceil(m/2)
        elif((e%2 == 0) and (a%2 == 1)):
          m+= e
          m = m*2
        else:
          m+= e
          m = m + (a*3)
      elif(e>0 and a==0):
        m = m + 3*e
      return m


while (i < N):
  M = dothings(ecounter,acounter,M)
  ecounter = 0
  acounter = 0


  M = M % what

  if (string[i]=='F' and (i < N - 2)):
    i+=1
   
    if (string[i:i+2] == 'EE'):
      i+=2
      M+=2
      if (i < N):
        while (string[i] == 'E'):
          M += 1
          if (i < N - 1):
            i+=1
          else:
            break

    elif( string[i:i+2] == 'EA'):
      i+=2
      M = M*2
       
  else:
    if (i < N - 3):
      if (string[i:i+2]=='PH'):
        ecounter=0
        acounter=0
        i+=2
        if (string[i:i+2] == 'EE'):
          i+=2
          ecounter+=2
          if (i < N):
            while (string[i] == 'E'):
              
              ecounter+=1
              if (i < N - 1):
                i+=1
                if (string[i]=='A'):
                  
                  break
              else:
                break
                        
            while (string[i] == 'A'):
              acounter += 1
              if (i < N - 1):
                i+=1
              else:
                break
        elif( string[i:i+2] == 'EA'):
          i+=2
          ecounter=1
          acounter=1
          if (i < N):
            while (string[i] == 'A'):
              acounter+=1
              
              if (i < N - 1):
                i+=1
              else:
                break
      else:
        try:
          val = int(string[i])
          M+=val
        except ValueError:
          i=i
        i+=1
      

    else:
      try:
        val = int(string[i])
        M+=val
      except ValueError:
        i=i
      i+=1

print(M)
