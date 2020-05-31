#include<bits/stdc++.h>
using namespace std;

void oddAppearing(int arr[], int n)            // Efficient method: Complexity - theta(n)
{
	int XOR=0, res1=0, res2=0;
	for(int i=0;i<n;i++)
		XOR = XOR^arr[i];
	int sn = XOR & ~(XOR-1);            // Rightmost set bit
	for(int i=0;i<n;i++)                // sn=8;
	{
		if((arr[i]&sn)!=0)
			res1 = res1^arr[i];
		else
			res2 = res2^arr[i];
	}
	cout<<res1<<" "<<res2;
}

int main()
{
	int arr[]={3,4,3,4,8,4,4,32,7,7};
	int n=10;
	oddAppearing(arr,n);
}
