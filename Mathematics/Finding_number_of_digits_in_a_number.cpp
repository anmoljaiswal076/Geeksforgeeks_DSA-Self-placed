#include<bits/stdc++.h>
using namespace std;

//Iterative Solution
int countDigit(long long n)
{
	int count=0;
	while(n!=0)
	{
		n=n/10;
		++count;
	}
	return count;
}

//Recursive Solution
int countDigit2(long long n)
{
	if(n==0)
		return 0;
	return 1+countDigit2(n/10);
}

//Logarithmic Solution
// Digit count of N = upper bound of log10(N).
int countDigit3(long long n)
{
	return floor(log10(n)+1);
}

// Convert number to string and then find length of string
/*
void countDigit4(int n)
{
	// converting number to string using to_string in C++ 
	string num = to_string(n);
	cout<<"Number of digits : " <<num.size()<<endl;
}
*/
int main()
{
	long long n=123;
	cout<<"Number of digits : " <<countDigit(n)<<endl;
	cout<<"Number of digits : " <<countDigit2(n)<<endl;
	cout<<"Number of digits : " <<countDigit3(n)<<endl;
	//countDigit4(n);
	return 0;
}
