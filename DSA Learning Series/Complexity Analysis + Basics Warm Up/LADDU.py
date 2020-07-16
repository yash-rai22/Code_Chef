# cook your dish here
for _ in range(int(input())):
    A,O = map(str, input().split())
    A = int(A)
    l = []
    total = 0
    
    for _ in range(A):
        a = input()
        l.append(a)
    
    for i in l:
        
        if i.split()[0] == 'CONTEST_WON':
            if int(i.split()[1]) <= 20 :
                total += 300 + 20 - int(i.split()[1])
            else :
                total += 300
            
        if i == 'TOP_CONTRIBUTOR':
            total += 300
                
        if i.split()[0] == 'BUG_FOUND':
            total += int(i.split()[1])
            
        if i == 'CONTEST_HOSTED':
            total += 50
                
    if O == 'INDIAN':
        print(total//200)
    else :
        print(total//400)
