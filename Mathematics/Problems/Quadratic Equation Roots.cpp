// { Driver Code Starts
//Initial Template for C++
/* C++ program to find roots of a quadratic equation */
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


//User function Template for C++

//You need to complete this function
void quadraticRoots(int a,int b, int c)
{
   
   //Your code here
   if((pow(b,2)-4*a*c)<0)
        cout<<"Imaginary";
    else if((pow(b,2)-4*a*c)==0)
        cout<<floor(-b/(2.0*a))<<" "<<floor(-b/(2.0*a));
    else if((pow(b,2)-4*a*c)>0)
    {
        cout<<floor((-b+sqrt(pow(b,2)-4*a*c))/(2.0*a))<<" "<<floor((-b-sqrt(pow(b,2)-4*a*c))/(2.0*a));
    }
   
   
   // Your don't need to printline
   // It will automatically be 
   // handled by driver code
}



// { Driver Code Starts.

int main() {
	int T; 
	cin>>T; //input number of testcases
	
	while(T--)
	{
	    int a, b, c; 
	    cin>>a>>b>>c; //Input a, b, and c
	    
	    quadraticRoots(a,b,c);
	    cout<<endl;
	    
	}
	return 0;
}  // } Driver Code Ends
