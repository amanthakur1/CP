for t in range(int(input())):
    n=int(input())
    l=list(map(int,input().split()))

    a=l.count(1)
    b=l.count(2)
    if(a&1):
        print("NO")
    elif(b&1 and a<2):
        print("NO")
    else:
        print("YES")