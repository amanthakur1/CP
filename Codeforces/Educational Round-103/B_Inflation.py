import math
for test in range(int(input())):
    n,k=map(int,input().split())
    arr=list(map(int,input().split()))
    
    curr,change=0,0
    last = arr[0]

    for i in range(1,n):
        curr = arr[i]
        if (curr*100)/last > k:
            cnt = math.ceil((100*curr)/k - last)
            last,change=last+cnt,change+cnt
        last += arr[i]
    
    print(change)