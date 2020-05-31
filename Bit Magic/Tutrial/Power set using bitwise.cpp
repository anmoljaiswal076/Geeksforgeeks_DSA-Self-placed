#include<bits/stdc++.h>
using namespace std;

void printPowerSet(string str)                  //Complexity: theta(2^n * n)
{
	int n=str.length();
	int powSize = pow(2,n);             // no. of subsets
	for(int counter=0; counter<powSize; counter++)
	{
		for(int j=0; j<n; j++)
		{
			if((counter&(1<<j))!=0)
				cout<<str[j];
		}
		cout<<"\n";
	}
}

int main()
{
	string str="abc";
	printPowerSet(str);
}
