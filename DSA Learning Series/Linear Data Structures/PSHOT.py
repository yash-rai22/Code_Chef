# cook your dish here
for _ in range(int(input())):
    n = int(input())
    s = input()
    a,b = 0,0
    ra,rb = n,n
    
    for i in range(2*n):
        if i % 2 == 0:
            a += int(s[i])
            ra -= 1
        else :
            b += int(s[i])
            rb -= 1
            
        if a > b + rb or b > a + ra :
            break
        
        
    print(i+1)  
        
        
