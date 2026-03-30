// Problem: Rotate Matrix by 90° (Clockwise)
// Pattern: Matrix Transformation (Transpose + Reverse)
// Trick: transpose (swap i,j ↔ j,i), then reverse each row
// Time Complexity: O(n^2)  Space Complexity: O(1)
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n=matrix.size();
        for(int i=0;i<n-1;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                swap(matrix[i][j],matrix[j][i]);
            }
        }
        for(int i=0;i<n;i++)
        {
            reverse(matrix[i].begin(),matrix[i].end());
        }
    }
};