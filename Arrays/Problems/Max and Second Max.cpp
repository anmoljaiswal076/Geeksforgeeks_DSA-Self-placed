// { Driver Code Starts
//Initial Template for C++

// CPP code to find largest and 
// second largest element in the array

#include <bits/stdc++.h>
using namespace std;

vector<int> largestAndSecondLargest(int, int[]);


 // } Driver Code Ends


     

/* Function to find largest and second largest element
*sizeOfArray : number of elements in the array
* arr = input array
*/
vector<int> largestAndSecondLargest(int sizeOfArray, int arr[]){
    
    int max1 = INT_MIN, max2= INT_MIN;
    
     for(int i=0; i<sizeOfArray; i++)
    {
        if(max1<arr[i])
        {
            max2=max1;
            max1=arr[i];
        }
        else if(max2<arr[i] && arr[i]!=max1)
            max2 = arr[i];
    }     
    if(max2==INT_MIN)
        max2=-1;
    vector<int> temp(2);
    temp[0] = max1;
    temp[1] = max2;
    return temp;
}

// { Driver Code Starts.

// Driver Code
int main() {
	
	// Testcase input
	int testcases;
	cin >> testcases;
    
    // Looping through all testcases
	while(testcases--){
	    int sizeOfArray;
	    cin >> sizeOfArray;
	    
	    int arr[sizeOfArray];
	    
	    // Array input
	    for(int index = 0; index < sizeOfArray; index++){
	        cin >> arr[index];
	    }
	    
	    vector<int> ans = largestAndSecondLargest(sizeOfArray, arr);
	    cout<<ans[0]<<' '<<ans[1]<<endl;
	}
	
	return 0;
}  // } Driver Code Ends
