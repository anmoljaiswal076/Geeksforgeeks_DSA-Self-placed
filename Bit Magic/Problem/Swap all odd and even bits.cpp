// { Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


//User function Template for C++

// function to swap odd and even bits
unsigned int swapBits(unsigned int n)
{
	//The number 0xAAAAAAAA is a 32 bit number with all even bits set as 1 and all odd bits as 0.

	unsigned int even_bits = n & 0xAAAAAAAA;            
	
	//The number 0x55555555 is a 32 bit number with all odd bits set as 1 and all even bits as 0
	
	unsigned int odd_bits = n & 0x55555555;            
	
	even_bits = even_bits>>1;                     // Right shift even bits
	
	odd_bits = odd_bits<<1;                       // Left shift odd bits
	
	return (even_bits | odd_bits);
	
}

// { Driver Code Starts.

// Driver code
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		unsigned int n;
		cin>>n;
		cout << swapBits(n) << endl;
	}
	return 0;
}  // } Driver Code Ends
