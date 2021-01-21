#include<bits/stdc++.h>
#define ll long long
#define SPEED ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
using namespace std;

// KNAPSACK PROBLEM
// In this problem we want to find maximum weight (non-contigous) we can make from bags having specific weight and we have limitation on maximum weight. IN this
// problem max weight is 9 --> j columns

int main()
{
	int profit[5]={0,1,2,5,6}; // profit we get on each ith index
	int weight[5]={0,2,3,4,5}; // weight of object in the ith index 
	int a[5][9]; // array to store elements
	memset(a,0,sizeof(a)); // initialize to 0
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<9;j++)
        {

            if (i==0 || j==0)
            {
                a[i][j]=0;
            }
            else
			{
				if (j>=weight[i])
				{
					a[i][j]=max(profit[i]+a[i-1][j-weight[i]],a[i-1][j]);  // Main algo
				}
				else
				{
					a[i][j]=a[i-1][j];
				}
            }
        }
    }
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<9;j++)
        {
            cout << a[i][j]<<" ";
        }
        cout <<endl;
    }


}

