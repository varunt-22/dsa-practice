// Problem: Missing Number
// Pattern: Hashing (Frequency Array)
// Trick: mark visited numbers using hash array → index with 0 is the missing number
// Time Complexity: O(n)  Space Complexity: O(n)
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
        vector<int> hash(n+1,0);
        for(int i=0;i<n;i++)
        {
            hash[nums[i]]=1;
        }
        for(int i=0;i<=n;i++)
        {
            if(hash[i]==0)
                return i;
        }
        return -1;
    }
};