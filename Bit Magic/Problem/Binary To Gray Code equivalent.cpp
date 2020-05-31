// { Driver Code Starts
//Initial Template for C++


#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


//User function Template for C++

//  Function to find the gray code of given number N
int greyConverter(int n)
{
    
    // Your code here
    return (n^(n>>1));
    
}

// { Driver Code Starts.

int main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
        cin >> n;
        cout << greyConverter(n) << endl;
    }
}
  // } Driver Code Ends
