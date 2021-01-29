def fun(input1,input2,input3):
    a=str(input1)
    b=str(input2)
    c=str(input3)

    l=map(int,c)
    key= int(a[0])*int(b[1]) - max(l)

    return key


a=int(input())
b=int(input())
c=int(input())

print(fun(a,b,c))