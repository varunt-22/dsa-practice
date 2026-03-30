// Problem: Best Time to Buy and Sell Stock
// Pattern: Greedy + Single Pass
// Trick: track minimum price so far and compute profit = prices[i] - min; update max profit accordingly
// Time Complexity: O(n)  Space Complexity: O(1)
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        int profit=0;
        int mini=prices[0];
        for(int i=1;i<n;i++)
        {
            int cost=prices[i]-mini;
            profit=max(profit,cost);
            mini=min(mini,prices[i]);


        }
        if(profit>0)
            return profit;
        return 0;
    }
};