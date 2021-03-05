#include <bits/stdc++.h>

using namespace std;
 
const int inf   =   INT_MAX;
const int mod   =   1e9+7;
const int N     =   1e5+5;
typedef long long int ll;
typedef pair<int,int> ii;

string op[4] = 
{
	"pushStack",
	"pushQueue",
  	"pushFront",
  	"pushBack"
};
 
string ans[N];
 
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
 
	int n,x,last = 0;
	cin>>n;
	
	priority_queue<ii> queries;
	for(int i=0;i<n;++i)
	{
		cin>>x;
 
		if(x == 0)
		{
			int qtd = 0;
			while(!queries.empty())	
			{
				int val = queries.top().first,id = queries.top().second;
				queries.pop();
 
				ans[id] = op[min(qtd,3)];
				qtd++;
			}
			
			for(int j = last;j<i;++j)
				cout<<ans[j]<<endl;
 
			cout<<min(qtd,3);
			if (qtd >= 1) cout << " popStack";
	        if (qtd >= 2) cout << " popQueue";
	        if (qtd >= 3) cout << " popFront";
	        cout<<endl;
 
			last = i + 1;
		}
		else
		{
			queries.push({x,i});
		}
	}
 
	for(int i=last;i<n;++i)
		cout<<op[0]<<endl;
}