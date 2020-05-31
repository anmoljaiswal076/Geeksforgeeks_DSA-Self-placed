// { Driver Code Starts
//Initial Template for C++


#include <bits/stdc++.h>
#define ll long long 
using namespace std;

int counter=2;


 // } Driver Code Ends


//User-function template for C++

// Complete the function
// n: Input n
// counter: variable has already been declared in driver code
//          you just have to use this variable.
// Return True if the given number is a lucky number else return False

bool isLucky(int n)  
{ 
    int next_position = n;  
    if(counter > n)  
        return 1;  
    if(n % counter == 0)  
        return 0;  
    
    next_position -= next_position / counter;  
      
    counter++;  
    return isLucky(next_position);  
}  

// { Driver Code Starts.

/*Driver function to test above function*/
int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin>>n;
        if(isLucky(n))
            cout<<"1\n";
        else
            cout<<"0\n";
        counter = 2;
    }
    return 0;
}  // } Driver Code Ends
