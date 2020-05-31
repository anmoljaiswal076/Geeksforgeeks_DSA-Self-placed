#include<bits/stdc++.h>
using namespace std;


int findOdd(int arr[], int n)            // Efficient Solution: O(n) times  nd O(1) aux. space
{
	int res=0;
	for(int i=0;i<n;i++)
		res = res^arr[i];                // x^0==x; x^(y^z)==(x^y)^z;  x^x=x;
	return res;
}
int main()
{
	int arr[]={4,3,4,4,5,5,3};
	int n=7;
	cout<<findOdd(arr,n)<<endl;
	
	// Naive solution
	for(int i=0;i<n;i++)
	{
		int count=0;
		for(int j=0;j<n;j++)
		{
			if(arr[j]==arr[i])
				count++;
		}
		if(count%2 != 0)
		{
			cout<<arr[i];
			break;
		}
	}
}
