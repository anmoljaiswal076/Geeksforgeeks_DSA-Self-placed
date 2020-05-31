#include<bits/stdc++.h>
using namespace std;

// Naive Solution
void leftRotateOne(int arr[], int n)
{
	int temp = arr[0];
	for(int i=1; i<n; i++)
		arr[i-1] = arr[i];
	arr[n-1]=temp;
}
void leftRotate(int arr[], int n, int d)               // Complexity: time-->theta(nd) and aux space-->theta(1)
{
	for(int i=0; i<d; i++)
		leftRotateOne(arr,n);
	for(int i=0;i<n;i++)
		cout<<arr[i]<<" ";
}



// Better method
void leftRotat(int arr[], int n, int d)               // Complexity: theta(d+n-d+d) = theta(n+d) == time--> theta(n)  and aux space--> theta(d)
{
	int temp[d];
	for(int i=0;i<d;i++)
		temp[i]=arr[i];
	for(int i=d;i<n;i++)
		arr[i-d]=arr[i];
	for(int i=0; i<d; i++)
		arr[n-d+i]=temp[i];
}

// Reversal Algorithm
void reverse(int arr[], int low, int high)            // Complexity: theta(d+n-d+n)=theta(2n)  time-->theta(n) and aux space-->theta(1)
{
	while(low<high)
	{
		int temp=arr[low];
		arr[low]=arr[high];
		arr[high]=temp;
		low++;
		high--;
	}
}
void leftRotat3(int arr[], int n, int d)
{
	reverse(arr,0,d-1);
	reverse(arr,d,n-1);
	reverse(arr,0,n-1);
}

int main()
{
	int arr[]={1,2,3,4,5};
	int arr1[]={1,2,3,4,5,6};
	int arr2[]={1,2,3,4,5};
	int d=2;
	leftRotate(arr,5,d);
	cout<<endl;
	leftRotat(arr1,6,d);
	for(int i=0;i<6;i++)
		cout<<arr1[i]<<" ";
	cout<<endl;
	leftRotat3(arr2,5,3);
	for(int i=0;i<5;i++)
		cout<<arr2[i]<<" ";
}
