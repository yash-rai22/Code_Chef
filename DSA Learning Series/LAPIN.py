for _ in range(int(input())):
    s = input()
    l = len(s)
    
    if l%2 == 0:
        n = l//2
        if sorted(s[0:n]) == sorted(s[n:l]):
            print('YES')
        else :
            print('NO')
            
    else :
        n = l//2
        if sorted(s[0:n]) == sorted(s[n+1:l]):
            print('YES')
        else:
            print("NO")
