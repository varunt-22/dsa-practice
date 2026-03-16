// Problem: Move Zeroes
// Pattern: Array Filtering (Temp Array)
// Trick: store non-zero elements → copy back → fill remaining with 0
// Time Complexity: O(n)  Space Complexity: O(n)

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        vector<int>temp;
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            if(nums[i]!=0)
                temp.push_back(nums[i]);
        }
        int nz=temp.size();
        for(int i=0;i<nz;i++)
        {
            nums[i]=temp[i];
        }
        for(int i=nz;i<n;i++)
        {
            nums[i]=0;
        }
    }
};
