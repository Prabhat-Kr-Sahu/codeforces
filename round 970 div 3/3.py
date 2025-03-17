def solve():
    n = int(input())
    l, r = map(int, input().split())

    i = l
    diff = 1
    length = 1

    while i + diff <= r:
        length += 1
        i += diff
        diff += 1

    print(length)

def main():
    t = int(input())
    for _ in range(t):
        solve()

if __name__ == "__main__":
    main()
