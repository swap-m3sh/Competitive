#include<bits/stdc++.h>
#define int long long int
#define SPEED ios_base:: sync_with_stdio(false);cin.tie(0);cout.tie(0)
using namespace std;
int M=1000000007;
// josephus problme : circular deleteion after every k number
void josephus(vector<int> &v,int k,int i)
{
	if (v.size()==1)
	{
		cout << v[0] << "\n";
		return;
	}
	i=(i+k)%(v.size());
	v.erase(v.begin()+i);
	josephus(v,k,i);

}
void solve()
{
	int n,k;
	cin>>n >> k;
	k=k-1;
	vector<int> v(n);
	for(int i=0;i<n;i++)
	{
		v[i]=i+1;
	}
    josephus(v,k,0); 
	
}

int32_t main()
{
    SPEED;
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif  
 
    int t;
    cin >> t;
    while(t--)
    {
        solve();
    }
}
		

