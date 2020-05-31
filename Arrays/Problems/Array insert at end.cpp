// { Driver Code Starts
//Initial Template for C++


#include <bits/stdc++.h>
using namespace std;

void insertAtEnd(int arr[],int sizeOfArray,int element);


 // } Driver Code Ends


//User function Template for C++


// You only need to insert the given element at 
// the end, i.e., at index sizeOfArray - 1. You may 
// assume that the array already has sizeOfArray - 1
// elements. 
void insertAtEnd(int arr[],int sizeOfArray,int element)
{
    //Your code here
    arr[sizeOfArray-1]=element;
}



// { Driver Code Starts.

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int sizeOfArray;
        cin>>sizeOfArray;
        
        int arr[sizeOfArray];
        for(int i=0;i<sizeOfArray-1;i++)
        cin>>arr[i];
        
        int element;
        cin>>element;
        
        insertAtEnd(arr,sizeOfArray,element);
        
        
        for(int i=0;i<sizeOfArray;i++)
        cout<<arr[i]<<" ";
        
        cout<<endl;
        
    }
    
	return 0;
}  // } Driver Code Ends
