#include<bits/stdc++.h>
#define ll long long 
#define SPEED ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
using namespace std;

int main()
{
	// USED to find maximum sum of an contigous sub array 
	// KADANE'S ALGORITHM (FIND MAX)
	
	int a[8]={1,5,-4,8,6,-8,-2,1};
	int Dp[8];
	Dp[0]=max(a[0],0);
	for(int i=1;i<8;i++)
	{
		Dp[i]=a[i]+max(Dp[i-1],0);
	}
	cout <<"MAX-CONTIGUOS ARRAY-->" <<*max_element(Dp,Dp+8)<<"\n";
	
	int DP[8];
	DP[0]=min(a[0],0);
	for(int i=1;i<8;i++)
	{
		DP[i]=a[i]+min(DP[i-1],0);
	}
	cout << "MIN-CONTIGUOUS ARRAY-->"<<*min_element(DP,DP+8);
	
}
