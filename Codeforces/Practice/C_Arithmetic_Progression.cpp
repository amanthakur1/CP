#include <bits/stdc++.h>
#define ll          long long
#define sync        ios::sync_with_stdio(false); cin.tie(0);cout.tie(0);
#define endl        "\n" 
#define test(t)     ll t;cin>>t;while(t--)
 
using namespace std;
 
const int inf   =   INT_MAX;
const int mod   =   1e9+7;
const int N     =   2e5+5;

int main(){
    sync
    // Write code from here
    ll n; cin>>n;
    ll a[n];
    
    for(int i=0;i<n;i++) cin>>a[i];

    // 1 num -> Infinte
    if(n==1) cout<<-1;
    // 2 nums
    else if(n==2){
        sort(a,a+n);
        ll diff=abs(a[0]-a[1]);
        if(diff%2==0 and diff!=0){ //ADDING  in mid and CORNERS
            cout<<3<<endl;
            cout<<a[0]-diff<<" "<<a[1]-diff/2<<" "<<a[1]+diff;
        }
        else{ // ADDING AT corners  only.
            set<ll> ans;
            ans.insert(a[0]-diff);
            ans.insert(a[1]+diff);
            cout<<ans.size()<<endl;
            for(ll x:ans) cout<<x<<" ";
        }
    }
    else{ //more then 2 nums 

        sort(a,a+n);
        set<ll> diff;                                       // storing diff of all pos

        for(ll i=0;i<n-1;i++){
            diff.insert(a[i+1]-a[i]);  
        }

        
        if(diff.size()>2){                                  // not AP
            cout<<0;
        }
        else if(diff.size()==2){                            // can be AP (two type of diff occur)
            auto it=diff.begin();
            ll x=*it; it++; ll y=*it;                       //itr for 1st and 2nd diff
            // int x=*diff.begin(),y=*diff.rbegin();        // same 
            if(y%2==0 and x==y/2){                          // can form AP with 2 diff in nums 
                ll idx=0;
                for(ll i=1;i<n;i++){
                    if((a[i]-a[i-1])==y){
                        idx=i-1;                            //pos for element to insert in mid 
                        break;
                    }
                }
                vector<ll> vec;                             // forming new AP  **(coz can change diff at one position)***
                for(ll i=0;i<n;i++){                        // so checking wheatherit is set or not till now.
                    vec.push_back(a[i]);
                    if(i==idx) vec.push_back(a[i]+x);
                }
                set<ll> ndiff;                              // All diff in new AP
                for(ll i=1;i<n+1;i++){
                    ndiff.insert(vec[i]-vec[i-1]);
                }
                if(ndiff.size()==1){                        // if all diff are same now  **ANS find
                    cout<<1<<endl;
                    cout<<a[idx]+x;                         // print inserted element

                }
                else{                                       // can't set               **NOT FOUND
                    cout<<0;
                }
            }
            else{                                           // not feasible
                cout<<0;
            }
        }
        else{                                               // given in AP       **ADDING AT END AND STARTING
            int x=*diff.begin();    
            set<ll> ans;                                    // for uniqueness at corners
            ans.insert(a[0]-x);
            ans.insert(a[n-1]+x);
            cout<<ans.size()<<endl;
            for(ll x:ans) cout<<x<<" ";
            
        }
    }
    
    
    return 0;
}