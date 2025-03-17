

t = int(input())

for m in range(t):
    s, d, k = map(int, input().split())
    a = set(map(int, input().split()))
    b = set(map(int, input().split()))

    uni = a.union(b)
    num = set(range(1, k+1))  # Adjusted range to start from 1

    if len(uni) >= k and len(uni.intersection(num)) >= k:
        if len(a.intersection(num)) <k/2 or len(b.intersection(num)) < k/2:
            print("NO")
        else:
            print("YES")
    else:
        print("NO")
