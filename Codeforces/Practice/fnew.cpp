#include <bits/stdc++.h>
#define ll          long long
#define pb          push_back
#define endl        "\n" 
#define all(v)      (v).begin(), (v).end() 
 
using namespace std;
 
const ll  inf   =   1e18;
const int mod   =   1e9+7;
const int N     =   2e5+5;

unsigned long long power(unsigned long long x, int y, int p) {
    unsigned long long res = 1;
    x = x % p;
    while (y > 0) {
        if (y & 1) res = (res * x) % p;
        y = y >> 1;
        x = (x * x) % p;
    }
    return res;
}
unsigned long long modInverse(unsigned long long n, int p) {
    return power(n, p - 2, p);
}
unsigned long long ncr(unsigned long long n, int r, int p) {
    if (n < r) return 0;
    if (r == 0) return 1;
    unsigned long long fac[n + 1];
    fac[0] = 1;
    for (int i = 1; i <= n; i++)fac[i] = (fac[i - 1] * i) % p;
    return (fac[n] * modInverse(fac[r], p) % p * modInverse(fac[n - r], p) % p) % p;
}

struct comp{
    bool operator()(pair<int,int> a, pair<int,int> b) const {
        if(a.first != b.first) return a.first < b.first;
        else return a.second < b.second;
    }
};

void solve(){
    // Write your code from here....

    ll n; cin>>n;

    set<pair<int,int>, comp> plat;
    for(int i=1;i<=n;i++){
        plat.insert({INT_MAX, i});
    }
    vector<pair<int,int>> arr, dept;
    for(int i=0;i<n;i++){
        ll num,p,q; 
        cin>>num>>p>>q;
        arr.pb({p,num});
        dept.pb({p+q,num});
    }

    sort(all(arr));
    sort(all(dept));

    int i=0;
    int j=0;
    int a=0,d=0;

    map<int,int> mp, pf;

    while(i<n){
        if(dept[j].first < arr[i].first){ 
            int num = dept[j].second, pp = mp[num];
            j++;
            plat.insert({dept[j].first,pp});
        }
        else{ 
            int pp = (*plat.begin()).second;
            mp[arr[i].second] = pp;
            pf[pp]++;
            i++;
            plat.erase(plat.begin());
        }
    }

    // plat for fth-train
    int f; cin>>f;
    cout<<mp[f]<<endl;

    // busy plat-------------------
    int busy_f=0;
    for(auto k: pf){
        busy_f = max(busy_f, k.second);
    }
    vector<int> busy;
    for(auto k:pf){
        if(k.second== busy_f) busy.pb(k.first);
    }
    
    sort(busy.begin(), busy.end());

    for(auto k:busy) cout<<k<<" ";
    cout<<endl;

    return;
}


int main(){

    ll test=1;
    // cin>>test;
    while(test--){
        solve();
    }
    return 0;
}

