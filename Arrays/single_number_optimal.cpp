// Problem: Single Number
// Pattern: XOR
// Trick: a ^ a = 0 and a ^ 0 = a → duplicate numbers cancel out, leaving the single number
// Example: [4,1,2,1,2] → (1^1) and (2^2) cancel → result = 4

// Time Complexity:
// O(N) → we traverse the array once and XOR all elements

// Space Complexity:
// O(1) → no extra space used, only one variable to store XOR
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int xorr=0;
        for(int i=0;i<nums.size();i++)
        {
            xorr=xorr^nums[i];
        }
        return xorr;
    }
};