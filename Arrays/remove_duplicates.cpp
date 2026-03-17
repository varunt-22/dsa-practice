// Problem: Remove Duplicates from Sorted Array
// Pattern: Two Pointers
// Trick: i = last unique position, j scans array → when nums[j] is new, place it at i+1
// Time Complexity: O(n)  Space Complexity: O(1)
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i=0;
        for(int j=1;j<nums.size();j++)
        {
            if(nums[j]!=nums[i])
            {
                nums[i+1]=nums[j];
                i++;
            }
        }
        return i+1;
    }
};
