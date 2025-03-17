t = int(input("Enter number of test cases: "))

for _ in range(t):
    n = int(input("Enter length of string: "))
    a = input("Enter string: ")
    
    l = -1
    r = -1
    
    i = 0
    while i < n - 1:
        
        if a[i] == '0' and a[i + 1] == '0' and l < 0:
            l = i
            i+=1
            print(f"Found consecutive '0's starting at index {i}")
        
        elif a[i] == '0' and a[i + 1] == '0':
            r = i + 1
            i+=1
            print(f"Updated r to {r} at index {i}")
        
        elif a[i] == '0' and a[i + 1] == '1' and l>=0 and r>0:
            print("now removing all zeroes")
            sub1 = a[:l ]   # Include character at index l
            sub2 = a[r +1:]   # From index r + 1 to end
            a = sub1 + "0" + sub2
            n = len(a)  
             
            i = i-r+l +1   
            print(i," ==i ","n==" ,n)
            
            l=-1 # Start from next possible '0' after modification
            
            
            r = -1
        else:
            
            i += 1
            
    
    print(a)
    
    c1 = a.count('1')
    c0 = a.count('0')
    
    if c0 >= c1:
        print("NO")
    else:
        print("YES")
