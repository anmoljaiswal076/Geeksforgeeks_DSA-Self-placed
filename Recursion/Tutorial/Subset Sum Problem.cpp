#include<bits/stdc++.h>
using namespace std;

int countSubsets(int arr[], int n, int sum)         //Complexity: theta[2^n + (2^n)-1] =~ theta(2^n)
{
	if(n==0)
		return (sum==0)? 1:0;
	
	return countSubsets(arr, n-1, sum)+countSubsets(arr, n-1, sum-arr[n-1]);
}

int main()
{
	int arr[]={10,20,15};
	cout<<countSubsets(arr,3,25);
}
