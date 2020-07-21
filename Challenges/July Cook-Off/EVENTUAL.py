# cook your dish here
for _ in range(int(input())):
    n = int(input())
    s = list(input())
    s1 = list(set(s))
    flag = 0
    
    for i in s1:
        if s.count(i) % 2 == 0:
            flag = 1
        else :
            flag = 0
            break
    
    if flag ==0:
        print("NO")
    else :
        print("YES")
