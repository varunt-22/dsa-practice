// Problem: Check if Array Is Sorted and Rotated
// Pattern: Array Traversal
// Trick: Count order breaks
// Time: O(n)
// Space: O(1)
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool check(vector<int>& nums) {
        int count=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]>nums[(i+1)%nums.size()])
            {
                count++;
            }
        }
        if(count<=1)
            return true;
        else
            return false;
    }
};
