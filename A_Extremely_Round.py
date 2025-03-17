for _ in range(int(input())):
    a=int(input())
    first_digit=0
    tot_digits=0
    while a:
        first_digit=a%10
        a=a//10
        tot_digits+=1
    tot_digits-=1
    print(tot_digits*9+first_digit)