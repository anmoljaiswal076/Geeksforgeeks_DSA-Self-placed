#include<bits/stdc++.h>
using namespace std;

void reverse(int arr[], int n)      // Time Complexity: theta(n) and Auxilary space: theta(1)
{
	int low=0, high=n-1;
	while(low<high)
	{
		int temp = arr[low];
		arr[low] = arr[high];
		arr[high] = temp;
		low++;
		high--;
	}
	for(int i=0;i<n;i++)
		cout<<arr[i]<<" ";
}

int main()
{
	int arr[] = {2,8,5,1,3,9};
	reverse(arr,6);
}
