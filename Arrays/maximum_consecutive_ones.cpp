// Problem: Max Consecutive Ones
// Pattern: Linear Traversal / Counter
// Trick: increase count when 1 appears, reset when 0 appears, track maximum
// Example: [1 1 0 1 1 1] → counts: 2 then reset then 3 → answer = 3
// Time Complexity: O(n)  Space Complexity: O(1)
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int maxi=0;
        int cnt=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==1)
            {
                cnt++;
                maxi=max(maxi,cnt);
            }
            else
            {
                cnt=0;
            }
        }
        return maxi;
    }
};