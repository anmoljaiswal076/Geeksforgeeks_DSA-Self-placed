#include<bits/stdc++.h>
using namespace std;

// Complexity: Get i-th elt--> theta(1)
// Complexity: Update i-th elt--> theta(1)

int deleteElt(int arr[], int n, int x)              // complexity: theta(n)
{
	int i;
	for(i=0;i<n;i++)
	{
		if(arr[i]==x)
		break;
	}
	if(i==n)
		return n;
	for(int j=i;j<n-1;j++)
		arr[j]= arr[j+1];
	
	return (n-1);
}

int main()
{
	int arr[]={3,8,12,5,6};
	cout<<"After deletion new size of array: "<<deleteElt(arr,5,12);
}
