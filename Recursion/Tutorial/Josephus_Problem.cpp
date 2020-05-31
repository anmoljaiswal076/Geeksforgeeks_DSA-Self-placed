#include<bits/stdc++.h>
using namespace std;

int jos(int n, int k)               // Complexity:- theta (n)
{
	if(n==1)
		return 0;
	else
		return(jos(n-1,k)+k)%n;
}

int myJos(int n, int k)
{
	return jos(n,k)+1;
}


int main()
{
	cout<<"If we consider 0 as start then Left element is "<<jos(4,3)<<endl;
	cout<<"If we consider 1 as start then Left element is "<<myJos(4,3);
}
