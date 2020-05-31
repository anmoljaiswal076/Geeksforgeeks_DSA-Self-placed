#include<bits/stdc++.h>
using namespace std;

// Naive solution
void leader(int arr[], int n)           // Complexity: time-->theta(n^2)
{
	for(int i=0; i<n; i++)
	{
		bool flag = false;
		for(int j=i+1; j<n ;j++)
		{
			if(arr[i]<=arr[j])
			{
				flag=true;
				break;
			}
		}
		if(flag==false) 
			cout<<arr[i]<<" ";
	}
}


void leader2(int arr[], int n)                     // Complexity: time-->theta(n)
{
	int curr_led = arr[n-1];
	cout<<curr_led<<" ";
	for(int i=n-2; i>=0; i--)
	{
		if(curr_led < arr[i])
		{
			curr_led = arr[i];
			cout<<curr_led<<" ";
		}
	}
}

int main()
{
	int arr[]={7,10,4,10,6,5,2};
	leader(arr, 7);
	cout<<endl;
	leader2(arr, 7);
}
