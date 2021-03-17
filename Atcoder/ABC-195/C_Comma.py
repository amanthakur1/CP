n = int(input())
ans = 0
i,z=1,1000

while n>=z:

	ans = ans + i * (min(n,z*1000)-z) + 1
	z*=1000
	i+=1
l=[]    

print(ans)