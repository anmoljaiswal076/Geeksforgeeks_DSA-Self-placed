#include<bits/stdc++.h>
using namespace std;

int getWater(int arr[], int n)                    // Complexity: time-->theta(n^2)  aux space-->theta(1)
{
	int res=0;
	for(int i=0;i<n-1;i++)
	{
		int lmax = arr[i];
		for(int j=0;j<i;j++)
			lmax = max(lmax , arr[j]);
		int rmax = arr[i];
		for(int j=i+1; j<n; j++)
			rmax = max(rmax, arr[j]);
		res = res+(min(lmax,rmax)-arr[i]);
	}
	return res;
}


int getWater2(int arr[], int n)                   // Complexity: time-->theta(n)  aux space-->theta(n)
{
	int res=0;
	int lmax[n],rmax[n];
	
	lmax[0] = arr[0];
	for(int i=1;i<n;i++)
		lmax[i] = max(lmax[i-1], arr[i]);
		
	rmax[n-1] = arr[n-1];
	for(int i=n-2;i>=0;i--)
		rmax[i] = max(rmax[i+1], arr[i]);
		
	for(int i =1; i<n-1; i++)
		res += (min(lmax[i], rmax[i]) - arr[i]);

	return res;
}
int main()
{
	int arr[]={3,0,1,2,5};
	cout<<"Naive Solution: "<<getWater(arr,5)<<endl;
	cout<<"Efficient Solution: "<<getWater2(arr , 5);
}
