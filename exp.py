def solve():
    n = int(input())
    v = list(map(int, input().split()))
    ans = 0
    flag = True

    if n == 1:
        print(0,"\n")
        return

    for i in range(n - 2, -1, -1):
        if(v[i] >= v[i + 1] and v[i + 1] == 0):
            k=v[i]//v[i + 1]
            v[i] = v[i] // pow(2, k)
            ans += v[i] // v[i + 1]
            flag = False
            
    if flag:
        print(-1,"\n")
    else:
        
        
        print(ans,"\n")

# Main execution
t = int(input())
for _ in range(t):
    solve()
