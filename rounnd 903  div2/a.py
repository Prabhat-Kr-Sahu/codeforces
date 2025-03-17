t=int(input())
for _ in range(t):
    n, m= map(int, input().split())
    
    x=str(input())
    s=str(input())
    ans=-1
    
    for i in range(6):
        
        if(s in x):
            ans=i
          
            break
        
        x=x+x
    
    print(ans)    
         
        