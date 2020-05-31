// Sum of n-natural numbers 
#include<iostream>
using namespace std;

int fun1(int n)
{
	return n*(n+1)/2;
}

int fun2(int n)
{
	int sum=0;
	for(int i=1;i<=n;i++)
		sum = sum +i;
	
	return sum;
}

int fun3(int n)
{
	int sum=0;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=i;j++)
			sum++;
	}
	
	return sum;
}
int main()
{
	cout<<fun1(5)<<endl;
	cout<<fun2(5)<<endl;
	cout<<fun3(5);
}
