#include<bits/stdc++.h>
using namespace std;

bool isPow2(int n)     // Naive Method
{
	if(n==0)
		return false;
	while(n!=1)
	{
		if(n%2!=0)
			return false;
		n = n/2;
	}
	return true;
}

bool iisPow2(int n)           //Efficient method 2
{
	return (n!=0) && ((n&(n-1))==0);
}

int main()
{
	int n=4; 
	if(iisPow2(n))                 // if(isPow2(n))
		cout<<"Yes";
	else
		cout<<"No";
}
