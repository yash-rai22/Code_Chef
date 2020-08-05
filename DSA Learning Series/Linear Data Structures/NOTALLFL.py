for _ in range(int(input())):
    a,b=map(int,input().split())
    ar=list(map(int,input().split()))
    j=1
    m=[]
    k=[0]*b
    for i in range(0,a):
        k[ar[i]-1]=i+1
        if 0 not in k:
           m.append(max(k)-j)
           c=k.index(min(k))
           j=min(k)+1
           k[c]=0
        if i==a-1:
            m.append(max(k)-j+1)
    print(max(m))    
