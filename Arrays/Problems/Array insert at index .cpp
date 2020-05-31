// { Driver Code Starts
//Initial Template for C++


#include <bits/stdc++.h>
using namespace std;

void insertAtIndex(int arr[],int sizeOfArray,int index,int element);

 // } Driver Code Ends


//User function Template for C++

// You need to insert the given element at the given index. 
// After inserting the elements at index, elements
// from index onward should be shifted one position ahead
// You may assume that the array already has sizeOfArray - 1
// elements.
void insertAtIndex(int arr[], int sizeOfArray, int index, int element)
{
    //Your code here
    for(int i=sizeOfArray-1;i>index;i--)
        arr[i]=arr[i-1];
    arr[index]=element;
}


// { Driver Code Starts.

int main() {
    int t;
    cin>>t;//Input testcases
    while(t--)
    {
        int sizeOfArray; 
        cin>>sizeOfArray;
        
        int arr[sizeOfArray];
        for(int i=0;i<sizeOfArray-1;i++)
        cin>>arr[i];
        
        int index;
        cin>>index;
        int element;
        cin>>element;
        
        insertAtIndex(arr,sizeOfArray,index,element); //Complete this function
        
        for(int i=0;i<sizeOfArray;i++)//Printing the array for verification
        cout<<arr[i]<<" ";
        
        cout<<endl;
        
    }
    
	return 0;
}  // } Driver Code Ends
