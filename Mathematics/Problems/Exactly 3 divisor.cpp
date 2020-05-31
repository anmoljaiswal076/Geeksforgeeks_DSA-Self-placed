// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


/*
int exactly3Divisors1(int N)
{
    int count=0;
    int i=2;
    while((i*i)<=N)
    {
        bool flag = true;
        int j=2;
        while(j<=i/2)
        {
            if(i%j==0)
                flag=false;
            j+=1;
        }
        if (flag)
            count+=1;
        i+=1;
    }
    return count;
}


int exactly3Divisors2(int N)   
{
	bool prime[N+1]; 
	memset(prime, true, sizeof(prime)); 
	prime[0] = prime[1] = false; 
  
	for (int p=2; p*p<=N; p++) 
	{ 
        // If prime[p] is not changed, then it is a prime 
       if (prime[p] == true) 
       { 
        // Update all multiples of p 
         for (int i=p*2; i<=N; i += p) 
              prime[i] = false; 
        } 
    } 
    int count =0;
    for (int i=0;  i*i <= N ; i++)
    { 
    	if (prime[i]) 
          count++; 
    }
    return count;
} 
*/
bool isPrime(int n)
{
    if(n<=1)
        return false;
    
    for(int i=2;i<=sqrt(n);i++)
        if(n%i==0)
            return false;
    
    return true ;
}


//Efficient method
int exactly3Divisors3(int N)                      // Complexity: time-->theta(N)  aux space-->theta(1)
{
    int counter=0; //Initializing counter to zero
    N = sqrt(N);
        
    for(int i=1;i<=N;i++) //running a loop from 1 to N
    {
        /* A number N only has 3 divisors if it is a perfect square and its square root is a prime number,
        and we know the number of perfect squares less than N which is sqrt(N),
        so just checking if i is prime or not */
        if(isPrime(i)) 
        counter++;
    }
    return counter;
}

// { Driver Code Starts.


int main()
 {
    int T;
    cin>>T;
    while(T--)
    {
        int N;
        cin>>N;
        cout<<exactly3Divisors3(N)<<endl;
    }
	return 0;
}  // } Driver Code Ends
