for i in range(int(input())):
    n=int(input())
    l=list(map(int,input().split()))
    
    ss=l[::-1]
    for i in range(n):
        if i<n//2:
            print(-1*ss[i],end=" ")
        else:
            print(ss[i],end=" ")
    print()