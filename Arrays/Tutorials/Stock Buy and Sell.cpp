#include<bits/stdc++.h>
using namespace std;

int maxProfit(int price[], int start, int end)                 // Complexity: time-->theta(n^2)
{
	if(end<=start)
		return 0;
	int profit = 0;
	for(int i=start; i<end; i++)
	{
		for(int j=i+1;j<end;j++)
		{
			if(price[j] > price[i])
			{
				int curr_profit = price[j]-price[i] + maxProfit(price,start,i-1)/*leftmax*/ + maxProfit(price, j+1, end);//right max
				profit = max(profit, curr_profit);
			}
		}
	}
	return profit;
}

// Profit when price raises
int maxProfit2(int price[], int n)                       // Complexity: time-->theta(n)
{
	int profit=0;
	for(int i=1;i<n;i++)
	{
		if(price[i]>price[i-1])
			profit += (price[i]-price[i-1]);
	}
	return profit;
}
int main()
{
	int price[] = {1,5,3,8,12};
	cout<<"Naive Solution :"<<maxProfit(price, 0 , 5)<<endl;
	cout<<"Efficient Solution :"<<maxProfit2(price,5);	
}
