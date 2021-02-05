test=int(input())
while(test>0):

    n = int(input())
    l = list(map(int,input().split()))
    m=4000000
    cnt=[0]*(n)
    maxi=3999999
    
    for i in range(n):
        if l[i]==i+1 and cnt[i+1]==0:
            cnt[i+1]=maxi
            maxi-=2
        else:
            if cnt[l[i]]!=0:
                cnt[i+1]=cnt[l[i]]
            else:
                cnt[i+1]=m
                cnt[l[i]]=m
                m-=2

    for i in range(1,n+1):
        print(cnt[i],end=" ")
    print()

    test-=1
    
