// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


int josephus(int n, int k);

int main() {
	
	int t;
	cin>>t;
	while(t--)
	{
		int n,k;
		cin>>n>>k;
		cout<<josephus(n,k)<<endl;
	}
	return 0;
}// } Driver Code Ends


/*You are required to complete this method */
int jos(int n,int k)
{
    if(n==1)
		return 0;
	else
		return(jos(n-1,k)+k)%n;
}
int josephus(int n, int k)
{
   //Your code here
   return jos(n,k)+1;
}
