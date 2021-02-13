#include <bits/stdc++.h>
#define ll          long long
#define int         ll
#define sync        ios::sync_with_stdio(false); cin.tie(0);cout.tie(0);
#define endl        "\n" 
#define test(t)     ll t=1;while(t--)
 
using namespace std;
 
const int inf   =   INT_MAX;
const int mod   =   1e9+7;
const int N     =   1e5+5;

int n,q,cnt;
int b[N], a[N], p[N];
int segs=0;

struct stree{
    int data,upd;
    int right,left;
} Node[5000000];

void s(int v,int p,int ch){
 
    if(ch==1){ 
        Node[++segs]=Node[Node[p].right];
        Node[p].right=segs; 
    }
    else{ 
        Node[++segs]=Node[Node[p].left];
        Node[p].left=segs; 
    }
 
}

void UPDATE(int v,int L,int R,int l,int r,int x){
    if(r==R and L==l){
        Node[v].upd+=x;
        return;
    }
    else{

        int mid=(L+R)/2;
        if(l>mid){
        s(Node[v].right,v,1);
        UPDATE(Node[v].right,mid+1,R,l,r,x);
        }
        else if(r<=mid){
            s(Node[v].left,v,0);
            UPDATE(Node[v].left,L,mid,l,r,x);
        }
        else{
            s(Node[v].right,v,1);
            s(Node[v].left,v,0);
            UPDATE(Node[v].right,mid+1,R,mid+1,r,x);
            UPDATE(Node[v].left,L,mid,l,mid,x);
        }
        Node[v].data=max(Node[Node[v].right].data+Node[Node[v].right].upd,Node[Node[v].left].data+Node[Node[v].left].upd);
    
    }
}

int GET(int v, int L, int R, int l, int r)
{   if(v==0) return 0;
    
    if(L==l and R==r) return Node[v].data+Node[v].upd;
    
    else{
        int mid=(L+R)/2;
        if(l>mid) return GET(Node[v].right,mid+1,R,l,r)+Node[v].upd;
        else if(r<=mid) return GET(Node[v].left,L,mid,l,r)+Node[v].upd;
        else{
           return max(GET(Node[v].right,mid+1,R,mid+1,r)+Node[v].upd,GET(Node[v].left,L,mid,l,mid)+Node[v].upd);
        }
    }
}


signed main(){   
    sync
    // write your code from here....
    test(t){
        cin>>n>>q>>cnt;
        
        
        for(int i=1;i<=n;i++) cin>>a[i];
        
        b[0]=0;
        p[0]=0;
        a[0]=100001;
        int c;
        for(int i=1;i<=n;i++){  
            c=i-1;
            while(a[c]<a[i]) c=p[c];
            p[i]=c;
        }

        for(int i=1;i<=n;i++){
            segs++;
            Node[b[i]=segs]=Node[b[i-1]];
            UPDATE(b[i],1,n,p[i]+1,i,1);
        }
        
        if(cnt==0){
            for(int i=1;i<=q;i++){ 
                ll l,r; cin>>l>>r;
                if(r<l) swap(l,r);

                cout<<GET(b[r],1,n,l,r)<<endl;
            }
        }
        else{  
            int last=0;
            for(int i=1;i<=q;i++){
                ll l,r; cin>>l>>r;
                l=(l+last-1)%n+1;
                r=(r+last-1)%n+1;
                if(r<l) swap(l,r);

                last=GET(b[r],1,n,l,r);
                cout<<last<<endl;
            }
        }
    }


    return 0;

}