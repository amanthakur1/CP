    #include <bits/stdc++.h>
    #define ll          long long
    #define int         ll
    #define sync        ios::sync_with_stdio(false); cin.tie(0);cout.tie(0);
    #define endl        " \n " 
    #define test(t)     ll t;cin>>t;while(t--)
    
    using namespace std;
    
    const int inf   =   INT_MAX;
    const int mod   =   1e9+7;
    const int N     =   3e5+5;

    int n,q,ans;
    int a[N]; 

    void ADD(int idx){
        if(a[idx]>a[idx+1] and a[idx]>a[idx-1]){
            ans+=a[idx];
        }
        if(a[idx]<a[idx+1] and a[idx]< a[idx-1]){
            ans-=a[idx];
        }

    }
    void REMOVE(int idx){
        if(a[idx]>a[idx+1] and a[idx]>a[idx-1]){
            ans-=a[idx];
        }
        if(a[idx]<a[idx+1] and a[idx]< a[idx-1]){
            ans+=a[idx];
        }

    }



    signed main() 
    {
    sync
    // Write code from here

        test(t){
            cin>>n>>q;

            for(int i=1;i<=n;i++) cin>>a[i];
            a[0]=a[n+1]=ans=0;

            for(int i=1;i<=n;i++) ADD(i);
            cout<<ans<<endl;
            while(q--){
                int l,r;
                cin>>l>>r;
                set <int> cnt;
                for(int j=-1;j<=1;j++){
                    int e1 = l+j;
                    int e2 = r+j;
                    
                    if( 0<e1 && e1<n+1 ) cnt.insert(e1);
                    if( 0<e2 && e2<n+1 ) cnt.insert(e2);
                }
                
                for(int x:cnt) REMOVE(x);

                swap(a[l],a[r]);

                for(int x:cnt) ADD(x);

                cout<<ans<<endl;

            }
        }
    return 0;
    }