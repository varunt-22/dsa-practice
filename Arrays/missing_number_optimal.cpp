// Problem: Missing Number
// Pattern: XOR
// Trick: XOR all numbers from 0..n and XOR array elements → remaining value is missing
// Time Complexity: O(n)  Space Complexity: O(1)

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int xor1=0,xor2=0;
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            xor2=xor2^nums[i];
            xor1=xor1^(i+1);
        }
        // xor1=xor1^n;
        return xor1^xor2;
    }
};