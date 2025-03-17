t = int(input())

for m in range(t):
    s, d, k = map(int, input().split())
    a = list(map(int, input().split()))
    b = list(map(int, input().split()))
    
    uni= a.union(b)
    num=list(range(k))
    if len(uni)>=k and len(uni.intersection(num))>=k :
          if len(a.intersection(num))>k/2 or len(b.intersection(num)>k/2):
               print("NO")
          
          else:
              print("YES")       
    else:
        print("NO")