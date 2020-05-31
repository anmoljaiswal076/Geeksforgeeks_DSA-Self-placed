// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


// Function to find minimum adjacent difference
// arr[]: input array
// n: size of array
int minAdjDiff(int arr[], int n){    
    // Your code here
    int temp[n];
    for(int i=0;i<n;i++)
    {
        if(i==(n-1))
            temp[i]=abs(arr[n-1]-arr[0]);
        else
            temp[i]=abs(arr[i+1]-arr[i]);
    }
    // return temp;
        
    int min = temp[0];
    for(int i=1;i<n;i++)
    {
        if(temp[i]<min)
            min=temp[i];
    }
    return min;
}

// { Driver Code Starts.

// Driver code
int main()
{
    int t;
    cin>>t; //Input testcases
    
    while(t--) //While testcases exist
    {
        int n;
        cin>>n; //Input size of array
        
        int arr[n]; //Array of size n
        
        for(int i = 0; i < n; i++)
        {
            cin>>arr[i]; //input elements of array
        }
        
        cout << minAdjDiff(arr, n) << endl;
    }
    return 0;
}  // } Driver Code Ends
