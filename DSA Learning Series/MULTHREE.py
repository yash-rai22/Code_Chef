# cook your dish here
testcases=int(input())
for _ in range(testcases):
    k,x,y=map(int,input().split())
    s=x+y
    if s!=0 and k>2:
        s=s+s%10
        if s!=10 and s!=20:
            s=s+(20*((k-3)//4))
            y=(k-3)%4
            for j in range(y):
                s=s+s%10
    if s%3==0:
        print('YES')
    else:
        print('NO')
