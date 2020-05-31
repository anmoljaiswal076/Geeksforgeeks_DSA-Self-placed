// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;
 
// Function to get rightmost set bit
int getRightMostSetBit(int n)
{
    return log2(n & -n) + 1; //finding the rightmost set bit of a number
}
 

 // } Driver Code Ends


//User function Template for C++

/*  Function to find the first position with different bits
*   This function returns the position with different bit
*/

int posOfRightMostDiffBit(int m, int n)
{
    
    // Your code here
    
    return getRightMostSetBit(m ^ n);
}

// { Driver Code Starts.

// Driver Code
int main()
{   
    int t;
    cin>>t; //input number of testcases
    while(t--)
    {
         int m,n;
         cin>>m>>n; //input m and n
         cout << posOfRightMostDiffBit(m, n)<<endl;
    }
    return 0;     
}   // } Driver Code Ends
