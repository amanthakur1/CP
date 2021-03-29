def GCD(x, y):
  
    if x > y:
        small = y
    else:
        small = x
    for i in range(1, small+1):
        if((x % i == 0) and (y % i == 0)):
            gcd = i
              
    return gcd
  


for i in range(int(input())):
    n=int(input())

    while(1):
        sm= sum(map(int,str(n)))
        if(GCD(n,sm)>1):
            print(n)
            break
        n+=1
    