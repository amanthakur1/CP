for test in range(int(input())):
    n,k = map(int,input().split())

    if k<n:
        k = (n//k + (1 if n%k else 0)) * k

    
    ans = k//n
    ans +=1 if k%n else 0
    print(ans)