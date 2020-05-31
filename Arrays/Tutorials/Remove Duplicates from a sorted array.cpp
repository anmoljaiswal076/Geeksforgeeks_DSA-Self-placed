#include<bits/stdc++.h>
using namespace std;

// Naive Solution
int remDupli(int arr[], int n)               //Efficiency: time-->theta(n) and space-->theta(n)
{
	int temp[n];
	temp[0] = arr[0];
	int res = 1;
	for(int i=1;i<n;i++)
	{
		if(temp[res-1]!=arr[i])
		{
			temp[res]=arr[i];
			res++;
		}
	}
	for(int i=0;i<res;i++)
		arr[i]=temp[i];
	
	cout<<"Distinct element of given array: ";
	for(int i=0;i<res;i++)
		cout<<arr[i]<<" ";
	return res;	
}

// Efficient Solution 
int remDupli2(int arr[], int n)                          //Efficiency: time-->theta(n) and space-->theta(1)
{
	int res = 1;
	for(int i=1;i<n;i++)
	{
		if(arr[i]!=arr[res-1])
		{
			arr[res] = arr[i];
			res++;
		}
	}
	
	cout<<"Distinct element of given array: ";
	for(int i=0;i<res;i++)
		cout<<arr[i]<<" ";
		
	return res;
}

int main()
{
	int arr[]={10,20,20,30,30,30};
	cout<<"\nAfter removal of duplicates, new size of Array: "<<remDupli2(arr,6);
}
