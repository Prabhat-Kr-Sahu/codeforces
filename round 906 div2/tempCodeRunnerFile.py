t = int(input())
for _ in range(t):
     n=int(input())
     list=[]
     dict={}
     for i in range (n):
         list[i]=int(input())
         
         if (list[i] in dict.keys()== False):
              dict[list[i]]=1
         
         elif (list[i] in dict.keys()==True):
               dict[list[i]] += 1    
    
     if (len(dict.keys())>2):
         print("No\n")     
     elif(len(dict.keys())<=2):
         print ("Yes\n")
      