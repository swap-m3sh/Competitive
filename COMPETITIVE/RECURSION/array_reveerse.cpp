#include<bits/stdc++.h>
#define int long long int
#define SPEED ios_base:: sync_with_stdio(false);cin.tie(0);cout.tie(0)
using namespace std;
int M=1000000007;

void cal(int a[],int n)
{
	if (n==1)
		return;
	int temp=a[n-1];
	cal(a,n-1);
	int j=n-2;
	while(j>=0)
	{
		a[j+1]=a[j];
		j--;
	}
	a[0]=temp;

}
void solve()
{
	int arr[5]={1,5,3,2,1};
	cal(arr,5);
	for( int i=0;i<5;i++)
	{
		cout << arr[i] << " ";
	}
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