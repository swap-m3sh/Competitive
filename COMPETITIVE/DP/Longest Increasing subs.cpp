#include<bits/stdc++.h>
#define ll long long
#define SPEED ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
using namespace std;

// LONGEST INCREASING SUB-SEQUENCE
// In this problem we want to find an array having longest strictly increasing sequence

int lis( int arr[], int n )  
{  
    int lis[n]; 
   
    lis[0] = 1;    
  
    /* Compute optimized LIS values in  
       bottom up manner */
    for (int i = 1; i < n; i++ )  
    { 
        lis[i] = 1; 
        for (int j = 0; j < i; j++ )   
            if ( arr[i] > arr[j] && lis[i] < lis[j] + 1)  
                lis[i] = lis[j] + 1;  
    } 
   
  
    // Return maximum value in lis[] 
    return *max_element(lis, lis+n); 
}  
    
/* Driver program to test above function */
int main()  
{  
    int arr[] = { 10, 22, 9, 33, 21, 50, 41, 60 };  
    int n = sizeof(arr)/sizeof(arr[0]);  
    lis( arr, n );
    printf("Length of lis is %d\n", lis( arr, n ) );  
  
    return 0;  
}


//reference link--> https://www.youtube.com/watch?v=CE2b_-XfVDk
