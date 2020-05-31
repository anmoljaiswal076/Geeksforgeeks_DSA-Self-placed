#include<bits/stdc++.h>
using namespace std;

// Searching in Unsorted Array of fixed-size array
int LinearSearch(int arr[], int n, int x)             // complexity: theta(n) --> for Unsorted  theta(logn) --> for sorted(Binary Search)
{
	for(int idx=0; idx<n; idx++)
	{
		if(arr[idx]==x)
			return idx+1;
	}
}

// Insertion in fixed-size array
int insert(int arr[], int n, int x, int capacity, int pos)                // complexity: theta(n) ; insert at end : theta(1) ; insert at beginning: theta(n)
{
	if(n== capacity)
		return n;
	int idx = pos-1;
	for(int i=n-1; i>=idx; i--)
		arr[i+1]=arr[i];
	arr[idx] = x;
	return (n+1);
}

// Insertion at the end for Dynamic Sized Array
// Push back operation in Vector of C/C++ and add operation in Arraylist of java
// Time Complexity of every insert for first n-inserts : theta(1)
// Avg. time complexity for (n+1)-inserts : theta(1)          i.e. (theta(1)+theta(1)+.........theta(1){-->for first-n elt's} +theta(n){--> for n+1 elt's}) / (n+1)
int main()
{
	int arr[]={20,5,7,25};
	int arr1[]={5,3,7,10,20};
	
	cout<<"Position of search elt's: "<<LinearSearch(arr,4,5)<<endl;
	
	cout<<"After insertion new size of array: "<<insert(arr1,5,8,6,2);
}
