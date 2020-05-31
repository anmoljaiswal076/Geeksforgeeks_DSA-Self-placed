#include<bits/stdc++.h>
using namespace std;

int countSet(int n)           // Naive Solution - complelxity: theta(total bits in n)
{
	int res=0;
	while(n>0)
	{
		if(n%2 != 0)                 
			res++;								// res = res+(n&1);
		n = n/2;                                // n = n>>1;
	}
	return res;
}

// Brian and Kerningham Algorithm  - complexity : theta(Set Bit Count)
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

// Lookup Table Method - Comlpexity : theta(1) Solution
unsigned int table[256];
void initialize()
{
	table[0]=0;
	for(int i=1;i<256;i++)
	{
		table[i] = (i & 1)+table[i/2];
	}
}

unsigned int count(int n)
{
	unsigned int res = table[n&0xff];
	n= n>>8;
	res = res + table[n&0xff];
	n = n>>8;
	res = res + table[n&0xff];
	n = n>8;
	res = res + table[n&0xff];
	return res;
}
int main()
{
	cout<<countSet(5)<<endl;
	cout<<countBits(5)<<endl;
	cout<<count(13);
}
