#include<bits/stdc++.h>
#define ll long long
#define SPEED ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
using namespace std;
ll int sum=0;
// its called stickler thief problem in which we can't access consecutive array elements... We want to find max sum of array
int solve(int i,int a[])
{
	if (i<=-1)
	{
		return 0;
	}
	if (dp[i]!=-1)
	{
		return dp[i];
	}
	int op1=a[i]+solve(i-2,a); // include n-2 element
	int op2=solve(i-1,a); // start checking from n-1 element
	dp[i]=max(op1,op2);
}
int main()
{
	ll int n;
	cin >> ;
	dp[n];
	memset(dp,-1,sizeof(dp));
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin >> a[i];
	}
	cout << solve(n-1,a);
	
}
