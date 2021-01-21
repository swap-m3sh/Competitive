#include<bits/stdc++.h>
#define ll long long 
#define SPEED ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
using namespace std;
// This is called memoisation technique in which we store all number which tells how many 2 & 3 are required to form particular Number, Eg 5= (2,3),(3,2);
// If we want to make it more simpler define the Dp array globally.

int main()
{
	int t;
	ll int M=1000000007;
	cin >> t;
	while(t--)
	{
		int k;
		cin >> k;
		int Dp[100000];
		Dp[0]=1;
		Dp[1]=0;
		Dp[2]=1;
		Dp[3]=1;
		for(int i=4;i<=(100000);i++)
		{
			Dp[i]=Dp[i-2]+Dp[i-3];
			Dp[i]%=M;
		}
		cout << Dp[k]<<"\n";
	}
}
