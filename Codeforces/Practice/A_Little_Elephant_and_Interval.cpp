#include <bits/stdc++.h>
#define ll          long long
#define sync        ios::sync_with_stdio(false); cin.tie(0);cout.tie(0);
#define endl        "\n" 
#define test(t)     ll t;cin>>t;while(t--)
 
using namespace std;
 
const int inf   =   INT_MAX;
const int mod   =   1e9+7;
const int N     =   2e5+5;
/* observe that every interval of length 10 has exactly 1 no which has 1st and last digit same, 
for ex: [1000,1010] has 1 no. =1001 with same 1st and last. also note that first 9 numbers all 
have same first and last digit(since they are of length 1). hence for all x>9 we add x/10 
(which is the no of intervals of length 10) + 9(for the first 9 nos). also observe that 
if the first digit of x > last digit of x, we the last interval wont be part of our answer.
hence we subtract 1 from the answer. for x<10, we simply return x
*/

ll go(ll x){
    if(x<10) return x;

    string s=to_string(x);
    ll last= (s[0] > s.back());
    return 9 + x/10 - last;
}

int main(){
    sync
    // Write code from here
    ll l,r; cin>>l>>r;

    cout<<go(r)-go(l-1);
    
    
    return 0;
}