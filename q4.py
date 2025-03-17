t= int (input())

for m in range(t):
    
    n=int(input())
    a=list(map(int,input().split()))
    q=int(input())
    for i in range(q):
        l,r= map(int, input().split())
        
        c=0
    
        if (1<=l<r<=n) :
            for j in range(l,r):
                 for x in range(j+1,r+1):
                      if a[j-1]!=a[x-1]:
                          c=1
                          print(f"{j} {x}")
                          break
                 
                 if c==1:
                     break     
                          
            if c==0:
                print(f"{-1} {-1}")    
            
            
        
        else: 
            print("-1 -1")  