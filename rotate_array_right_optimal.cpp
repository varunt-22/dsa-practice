// Problem: Rotate Array
// Pattern: Array Rotation (Reverse Parts)
// Trick: reverse(first n-k) → reverse(last k) → reverse(all)
// Time Complexity: O(n)  Space Complexity: O(1)

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n=nums.size();
        k=k%n;
        reverse(nums.begin(),nums.begin()+(n-k));
        reverse(nums.begin()+(n-k), nums.end());
        reverse(nums.begin(),nums.end());

        

    }
};