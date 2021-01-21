#include<bits/stdc++.h>
#define ll long long 
#define SPEED ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
using namespace std;
int cnt =0;

void findsum(int arr[],int sum,vector <int> v,int n)
{
	if(sum==0) // found out the subset giving sum=0 
	{
		cnt++;
		for(int i=0;i<v.size();i++)
		{
			cout << v[i]<<" ";
		}
		cout << endl;
		return;
	}
	if (n==0) // no element present
	{
		return ;
	}
	if (sum>0)
	{
		findsum(arr, sum, v, n-1);  // Exclude any element 
        v.push_back(arr[n - 1]); 
        findsum(arr, sum-arr[n-1] , v, n-1); // include any element
    }
}
int main()
{

	int a[]={1,2,4,6,3};
	int n=5;
	vector <int> v; // taking an empty vector 
	findsum(a,6,v,n);// 14=required sum
	cout << cnt; // it gives the total count of the number having that sum
}
