// { Driver Code Starts
//Initial Template for C++

// C++ program to check if n is sparse or not
#include<iostream>
using namespace std;


 // } Driver Code Ends


//User function Template for C++

// function to check if the number is sparse
// n : is the number to check if it is sparse
bool isSparse(int n){
    // Your code
    if(n & (n>>1))
        return false;
    return true;
}

// { Driver Code Starts.

// Driver Code
int main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        
        if(isSparse(n)){
            cout << "1" << endl;
        }
        else cout << "0" << endl;
        
    }
    return 0;
}  // } Driver Code Ends
