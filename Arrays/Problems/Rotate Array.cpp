// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


// This function rotate array by D elements
// arr: input elements
// n: size of the array
void reverse(int arr[], int low ,int high)
{
    while(low<high)
    {
        int temp = arr[low];
        arr[low] = arr[high];
        arr[high] = temp;
        low++;
        high--;
    }
}
void rotateArr(int arr[], int d, int n){
    
   // Your code here
    reverse(arr, 0 ,d-1);
    reverse(arr, d ,n-1);
    reverse(arr, 0 ,n-1);
}



// { Driver Code Starts.

int main() {
	//code
	
	int t;
	cin >> t;
	
	while(t--){
	    int n, d;
	    cin >> n >> d;
	    
	    int arr[n];
	    
	    for(int i = 0; i < n; i++){
	        cin >> arr[i];
	    }
	    
	    rotateArr(arr, d,n);
	    
	    for(int i =0;i<n;i++){
	        cout << arr[i] << " ";
	    }
	    cout << endl;
	    
	}
	
	return 0;
}  // } Driver Code Ends
