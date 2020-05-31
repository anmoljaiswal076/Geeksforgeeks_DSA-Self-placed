// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


//User function Template for C++

//Complete this function
long long factorial (int N)
{
    //Your code here
    if(N==0)
        return 1;
    return N*factorial(N-1);
}


// { Driver Code Starts.
int main()
{
    int T,N;
    cin>>T;  //input number of testcases
    while(T--)
    {
        cin>>N; //input n
        cout<<factorial(N)<<endl;
    }
    return 0;
}
  // } Driver Code Ends
