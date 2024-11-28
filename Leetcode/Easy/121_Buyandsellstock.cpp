/*
You are given an array prices where prices[i] is the price of a given stock on the ith day.

You want to maximize your profit by choosing a single day to buy one stock and choosing a different day in the future to sell that stock.

Return the maximum profit you can achieve from this transaction. If you cannot achieve any profit, return 0.

 

Example 1:

Input: prices = [7,1,5,3,6,4]
Output: 5
Explanation: Buy on day 2 (price = 1) and sell on day 5 (price = 6), profit = 6-1 = 5.
Note that buying on day 2 and selling on day 1 is not allowed because you must buy before you sell.
Example 2:

Input: prices = [7,6,4,3,1]
Output: 0
Explanation: In this case, no transactions are done and the max profit = 0.
 

Constraints:

1 <= prices.length <= 105
0 <= prices[i] <= 104
*/


#include<iostream> 
#include<climits>
using namespace std;

// this question is now done by O(n) time complexity but we can do it with O(nlogn) with the help
// of divide and conquer approach
int maximumprofit(int prices[],int size){
    int maxprofit=0;
    int bestbuy=prices[0];

    for(int i=1;i<size;i++){
        if(prices[i] > bestbuy){
            maxprofit=max(maxprofit,prices[i]-bestbuy);

        }
        bestbuy = min(bestbuy,prices[i]);
    }
    cout<<maxprofit<<endl;
    return maxprofit;
}


int main(){
    int prices[]={7,1,4,3,6};
    int size=end(prices)-begin(prices); //sizeof(arr)/sizeof(arr[0])
    maximumprofit(prices,size);
    return 0;
}

