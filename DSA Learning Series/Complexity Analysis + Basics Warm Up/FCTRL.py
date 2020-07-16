for _ in range(int(input())):
    n = int(input())
    a,total = 5,0
    
    while (n//a):
        total += n//a
        a *= 5
    print(total)
        
