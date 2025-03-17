t=int(input())

for k in range (t):
    
    n= int(input())
    str=input()
    k=[]
    for i in range (n):
        
        if str[i]=="B":
            k.append(i)
    if (len(k)==1):
        print(1)    
    else:    
     ans=k[len(k)-1]-k[0]+1
     print(ans)         
    