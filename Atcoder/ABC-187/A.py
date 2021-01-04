a,b=map(int,input().split())

l1=sum(list(map(int,str(a))))
l2=sum(list(map(int,str(b))))
if l1>=l2:
    print(l1)
else:
    print(l2)