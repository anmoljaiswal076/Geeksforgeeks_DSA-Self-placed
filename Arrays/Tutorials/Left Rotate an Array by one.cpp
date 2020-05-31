#include<bits/stdc++.h>
using namespace std;

void LRotate(int arr[], int n)                           //Efficiency: time-->theta(n) and space-->theta(1)
{ 
	int temp = arr[0];
	for(int i=1; i<n ;i++)
		arr[i-1] = arr[i];
	arr[n-1] = temp;
	
	cout<<"After counter-clockwise rotatation an array by one: ";
	for(int i=0; i<n ;i++)
		cout<<arr[i]<<" ";
}


int main()
{
	int arr[]={1,2,3,4,5};
	LRotate(arr,5);
}#include<bits/stdc++.h>
using namespace std;

void LRotate(int arr[], int n)                           //Efficiency: time-->theta(n) and space-->theta(1)
{ 
	int temp = arr[0];
	for(int i=1; i<n ;i++)
		arr[i-1] = arr[i];
	arr[n-1] = temp;
	
	cout<<"After counter-clockwise rotatation an array by one: ";
	for(int i=0; i<n ;i++)
		cout<<arr[i]<<" ";
}


int main()
{
	int arr[]={1,2,3,4,5};
	LRotate(arr,5);
}
