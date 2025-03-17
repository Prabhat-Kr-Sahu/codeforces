
t= int (input())
for m in range(t):

  n, k = map(int, input().split())  

  alpha = ["a", "b", 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z']

  s = ''
  
  for i in range(k):
            s = s + alpha[i]
        
  if (n!=1):
        for i in range(n-1):
               s=s+s
               

  print(s)