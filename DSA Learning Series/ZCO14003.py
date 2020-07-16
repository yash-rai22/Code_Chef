# cook your dish here
l = []
for _ in range(int(input())):
    n = int(input())
    l.append(n)
    
l.sort()
l1 = []
n = len(l)
for i in l:
    l1.append(i*n)
    n -= 1
print(max(l1))
