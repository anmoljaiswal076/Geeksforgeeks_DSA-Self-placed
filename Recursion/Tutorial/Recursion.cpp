#include<bits/stdc++.h>
using namespace std;

void fun(int n)
{
	if(n<1)
		return;
	else
	{
		cout<<n<<" " ;
		fun(n-1);
		cout<<n<<" ";
	}
}

void fun2(int n)                  // To print number from n to 1
{
	if(n<1)
		return;
	cout<<n<<" ";
	fun2(n-1);                        //Using Tail Recursion (faster)  eg. Quick Sort used that recursion
}

/*
void fun3(int n)
{
	if(n<1) return;
	
	fun3(n-1);
	cout<<n<<" ";
}
*/
void fun3(int n, int k=1)            // fun3 converted into tail recursion (Work is same but faster than previous)
{
	if(n<1) return;
	cout<<k<<" ";
	fun3(n-1,k+1);
}

int fact(int n,int val=1)             //factorial fun as tail recursive
{
	if(n==0) return val;
	return fact(n-1,n*val);
}

bool isPal(string str,int s, int e)              // Recursive fun to check given string palindrome
{
	if(s==e) return true;
	if(s>e) return true;
	if(str[s] != str[e])
		return false;
	
	return isPal(str, s+1, e-1);
}
int main()
{
	fun(3);
	cout<<endl;
	fun2(5);
	cout<<endl;
	fun3(4);
	cout<<endl;
	cout<<fact(5)<<endl;
	
	cout<<isPal("geeks",0,4)<<endl;
}
