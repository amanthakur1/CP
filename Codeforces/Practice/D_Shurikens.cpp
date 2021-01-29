#include <bits/stdc++.h>
#define ll          long long
#define sync        ios::sync_with_stdio(false); cin.tie(0);cout.tie(0);
#define endl        " \n " 
#define test(t)     ll t;cin>>t;while(t--)
 
using namespace std;
 
const int inf   =   INT_MAX;
const int mod   =   1e9+7;
const int N     =   2e5+5;
 
int main() 
{
sync
// Write code from here
    priority_queue<int,vector<int>, greater<int> > pq;
    int n,x;
    cin>>n;
    string s="";
    vector<int> arr;
    char c;
    for(int i=0;i<2*n;i++){
        cin>>c;
        s+=c;
        if(c=='-') cin>>x, arr.push_back(x);
    }
    vector <int> ans;
    int idx=n-1;

    for(int i=2*n-1;i>=0;i--){
        if(s[i]=='+'){
            if(pq.empty()){
                cout<<"NO";
                return 0;
            }
            else{
                ans.push_back(pq.top());
                pq.pop();
            }
        }
        else{
            if(pq.empty()){
                pq.push(arr[idx--]);
            }
            else{
                if(pq.top()<arr[idx]){
                    cout<<"NO";
                    return 0;
                }
                else{
                    pq.push(arr[idx--]);
                }
            }
        }

    }
    cout<<"YES"<<endl;
    for(int i=n-1;i>=0;i--){
        cout<<ans[i]<<" ";
    }

return 0;
}