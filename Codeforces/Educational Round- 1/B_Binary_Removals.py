for i in range(int(input())):
    a=input()

    n=len(a)
    if(n<=3):
        print("YES")
        continue
    has11=0
    has00=0
    for i in range(n-1):
        if(a[i]==a[i+1] and a[i]== '1'):
            if (has11==0):
                has11=i+1
        if(a[i]==a[i+1] and a[i]=='0'):
            has00=i+1
    # print(has11, has00)
    if(has11!=0 and has00!=0 and has11<has00):
        print("NO")
    else:
        print("YES")