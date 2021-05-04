#include<bits/stdc++.h>
#define int long long int
#define SPEED ios_base:: sync_with_stdio(false);cin.tie(0);cout.tie(0)
using namespace std;
int M=1000000007;
// kth symbol in grammar
//https://leetcode.com/problems/k-th-symbol-in-grammar/

int cal(int n, int k)
{
	if (n==1 && k==1)
		return 0;
	int mid=pow(2,n-2);
	// mid=mid/2;
	if (k<=mid)
		return cal(n-1,k);
	else
		return !cal(n-1,k-mid);
}
void solve()
{
	int n,k;
    cin >> n >>  k;
	cout << cal(n,k) << endl;
}

int32_t main()
{
    SPEED;
    
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif	 
	
	int t=1;
	// cin >> t;
	while(t--)
	{
		solve();
	}
}