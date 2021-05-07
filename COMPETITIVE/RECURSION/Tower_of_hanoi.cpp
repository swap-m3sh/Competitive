#include<bits/stdc++.h>
#define int long long int
#define SPEED ios_base:: sync_with_stdio(false);cin.tie(0);cout.tie(0)
using namespace std;
int M=1000000007;
// Tower of hanoi
// ref https://www.youtube.com/watch?v=l45md3RYX7c

void towerhanoi(int n,string s,string d,string h)
{
	if (n==1)
	{
		cout << "1" << " from " << s << " to " <<d << "\n" ; 
		return;
	}
	towerhanoi(n-1,s,h,d);
	cout << n << " from " << s << " to " << d<<"\n";
	towerhanoi(n-1,h,d,s);


}
void solve()
{
	int n;
	cin >> n;
	string s,h,d;
	s="source";
	h="helper";
	d="destined";
	towerhanoi(n,s,d,h);
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