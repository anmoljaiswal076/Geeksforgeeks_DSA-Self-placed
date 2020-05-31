// { Driver Code Starts
//Initial Template for C++

#include<iostream>
using namespace std;


 // } Driver Code Ends

int countBits(int n)
{
    int res=0;
	while(n>0)
	{
		n = n&(n-1);
		res++;
	}
	return res;
}
//User function Template for C++

// Function to count set bits in the given number x
// n: input to count the number of set bits
int countSetBits(int n){
    
    // Your logic here
    int count=0;
    while(n>0)
    {
        count +=countBits(n);
        n--;
    }
    return count;
}

// { Driver Code Starts.

// Driver code
int main()
{
	 int t;
	 cin>>t;// input testcases
	 while(t--) //while testcases exist
	 {
	       int n;
	       cin>>n; //input n
	       
	       cout << countSetBits(n) << endl;// print the answer
	  }
	  return 0;
}
