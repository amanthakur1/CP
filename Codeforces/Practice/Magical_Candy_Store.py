M=1000000007
t=int(input())
for T in range(t):
    size=int(input())
    templ1=list(map(int,input().split()))
    qsize=int(input())
    if 1 not in templ1:
        res=[]
        tes=0 
        for j in range(size-1):
            if templ1[j]%2==1:
                tes=(tes+(templ1[j]-1))%M
            else:
                tes=(tes+templ1[j])%M
                
            res.append(tes)
        if templ1[-1]%2==1:
            tes=(tes+(templ1[-1]))%M
        else:
            tes=(tes+(templ1[-1]-1))%M
            
        res.append(tes)
        for i in range(qsize):
            query=int(input())
            tes1=((query//size)*tes)%M 
            md=query%size 
            if md==0:
                if templ1[-1]%2==0:
                    tes1=(tes1+1)%M
                
            else:
                tes1=(tes1+res[md-1])%M
                if templ1[md-1]%2==1:
                    tes1=(tes1+1)%M
                
            print(tes1%M)
    else:
        if templ1[0]==1:
            for i in range(qsize):
                query=int(input())
                tes=(query//size)%M
                if query%size>1 or query<size:
                    tes=(tes+1)%M
                print(tes%M)
        elif templ1[-1]==1:
            res=[]
            tes=0 
            for i in range(size-1):
                if templ1[i]%2==1:
                   tes=(tes+(templ1[i]-1))%M
                else:
                    tes=(tes+templ1[i])%M
                    
                res.append(tes)
            tes=(tes+1)%M 
            res.append(tes)
            for i in range(qsize):
                query=int(input())
                tes1=((query//size)*tes)%M 
                md=query%size
                if md!=0:
                    tes1=tes1+res[md-1]
                    if templ1[md-1]%2!=0:
                        tes1=(tes1+1)%M
                print(tes1%M)
        else:
            res=[]
            tp=templ1.index(1)
            tes1=0 
            for j in range(tp-1):
                if templ1[j]%2==1:
                    tes1=(tes1+(templ1[j]-1))%M
                else:
                    tes1=(tes1+templ1[j])%M
                    
                res.append(tes1)
            if templ1[tp-1]%2==1:
                tes4=(tes1+(templ1[tp-1]-1))%M
                tes1=(tes1+templ1[tp-1])%M
            else:
                tes4=(tes1+templ1[tp-1])%M
                tes1=(tes1+(templ1[tp-1]-1))%M
                
            res.append(tes1)
            res.append(tes4+1)
            for j in range(tp+1,size-1):
                if templ1[j]%2==1:
                    tes1=(tes1+(templ1[j]-1))%M
                else:
                    tes1=(tes1+templ1[j])%M
                    
                res.append(tes1)
            if templ1[-1]%2==1:
                tes1=(tes1+templ1[-1])%M
            else:
                tes1=(tes1+(templ1[-1]-1))%M
                
            res.append(tes1)
            for i in range(qsize):
                query=int(input())
                tes=(tes1*(query//size))%M
                md=query%size
                if md-1<tp:
                    if md==0:
                        if templ1[-1]%2==0:
                            tes=(tes+1)%M
                    else:
                        if md-2>-1:
                            tes=(tes+res[md-2])%M
                        tes=(tes+templ1[md-1])%M
                        
                elif md-1==tp:
                    tes=(tes+res[md-1])%M
                else:
                    tes=(tes+res[md-1])%M
                    if templ1[md-1]%2!=0:
                        tes=(tes+1)%M
                print(tes%M)