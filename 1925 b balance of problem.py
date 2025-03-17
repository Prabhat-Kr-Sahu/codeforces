

def find_factors(number):
    factors = []
    
    factors.append(number)
    
    if number%2==0:
        factors.append(number//2)
        
        
    for i in range(1, number//2):
        if number % i == 0:
            factors.append(i)
    return factors

t=int(input("t::"))

for m in range(t):
     
     n,x= map(int, input().split()) 
   
     
     if (1<=n<=x) and (1<=x<=10**8):
         k=find_factors(n)
         i=0
         while(k[i]<x):
            i=i+1
         
         print(k[i-1])                
             
                   
           