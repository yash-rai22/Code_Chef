# cook your dish here
for _ in range(int(input())):
    n = int(input())
    l = list(map(int, input().split()))
    c = 1
    
    if len(l) == 1:
        print(1)
        
    else:
        a = l[0]
        for i in range(1,len(l)):
            if l[i] <= a:
                c += 1
                a = l[i]
        print(c)
