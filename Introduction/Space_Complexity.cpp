#include<iostream>
using namespace std;

int fib(int n)          //Auxilary space or Space Complexity:- theta(n)
{
	if(n==0 || n==1)
		return n;
		
	return fib(n-1)+fib(n-2);
}

int fib2(int n)        //Auxilary space or Space Complexity:- theta(n)
{
	int f[n+1];
	f[0]=0;
	f[1]=1;
	for(int i=2;i<=n;i++)
		f[i]=f[i-1]+f[i-2];
	
	return f[n];
}

int fib3(int n)        //Auxilary space or Space Complexity:- theta(1)
{
	if(n==0||n==1)
		return n;
		
	int a=0, b=1,c;
	for(int i=2;i<=n;i++)
	{
		c=a+b;
		a=b;
		b=c;
	}
	return c;
}
int main()
{
	cout<<fib(4)<<endl;
	cout<<fib2(4)<<endl;
	cout<<fib3(4);
}
