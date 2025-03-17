t=input()

for k in range(t):
    l=int(input())
    s=str(input())
    s=s[::-1]


    if(s.isdigit()==True):
           print("YES") 
    elif(s.isalpha()==True):
        print("YES")

    elif(s.isalnum()==True):
        n=["0","1","2","3","4","5",'6','7','8','9']
        k=0  
        it=0              
        for i in range(len(s)):
              if (s[0].isalpha()==True):
                  if (k==0):              
                      if (s[i] in n):
                         k=1
                         it=i
                  if (k==1):
                        if (s[it:].isdigit()==True):
                             print("YES")
                             break
                
      
              else:
               print("NO")  
               break            
    else:
        print("NO")
                     
         
                                     
       
           