for _ in range(int(input())):
    n = int(input())
    l = list(map(int, input().split()))
    ans = n*(n+1)/2
    
    res = set() 
    pre = {0} 
  
    for x in l: 
        pre = {x | y for y in pre} | {x} 
        res |= pre 
    l1 = len(res)
    
    if ans == l1:
        print("YES")
    else :
        print("NO")
  
    
