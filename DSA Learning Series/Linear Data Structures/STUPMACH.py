# cook your dish here
for _ in range(int(input())):
    n = int(input())
    l = list(map(int, input().split()))
    t = 0
    
    # while l[0]:
    for i in range(n):
        
        if l[i] == min(l):
            t = t + l[i]*(n-i)
            break
            
        t += l[i]
            # if l[i] == 0:
            #     break
            # if l[i] > 0:
            #     t += 1
            #     l[i] -= 1
                
            
            
    print(t)        
