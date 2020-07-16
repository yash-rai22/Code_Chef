# cook your dish here
for _ in range(int(input())):
    for _ in range(int(input())):
        i,n,q = map(int, input().split())
        
        if n % 2 == 0:
            print(n//2)
        else :
            if i == q :
                print(n // 2)
            else :
                print((n // 2) + 1)
