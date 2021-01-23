n = int(input().strip(" "))
l = list(map(int,input().split()))


sizel = len(l)
a,b = 0,sizel//2


for i in range(sizel//2,sizel):
    if l[i]>l[b]:
        b = i
for i in range(sizel//2):
    if l[i]>l[a]:
        a = i

if l[a]>l[b]:
    print(b+1)
else:
    print(a+1)