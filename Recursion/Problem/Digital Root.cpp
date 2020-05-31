// { Driver Code Starts
//Initial Template for C++


#include <iostream>
using namespace std;


 // } Driver Code Ends


//User function Template for C++

//Complete this function
int digitalRoot(int n)
{
    //Your code here
    if(n<9) return n;
    
    int c= n%10+digitalRoot(n/10);
    if(c>9)
        return digitalRoot(c);
    return c;

//	if (n>9)
//		return digitalRoot(n%10+digitalRoot(n/10));
//	return n;
}

// { Driver Code Starts.


int main() {
	int T;
	cin>>T;
	while(T--)
	{
	    int n;
	    cin>>n;
	    
	    cout<<digitalRoot(n)<<endl;
	    
	    
	}
	return 0;
}  // } Driver Code Ends
