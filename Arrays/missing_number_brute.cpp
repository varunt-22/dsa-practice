// Problem: Missing Number
// Pattern: Brute Force (Nested Loop)
// Trick: for every number from 0..n check if it exists in array using another loop
// Example: [3,0,1], n=3 → check 0 ✓, 1 ✓, 2 ✗ → missing = 2
// Time Complexity: O(n²)  Space Complexity: O(1)

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();

        for(int i = 0; i <= n; i++)
        {
            int flag = 0;

            for(int j = 0; j < n; j++)
            {
                if(nums[j] == i)
                {
                    flag = 1;
                    break;
                }
            }

            if(flag == 0)
                return i;
        }

        return -1;
    }
};