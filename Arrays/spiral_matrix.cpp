// Problem: Spiral Traversal of Matrix
// Pattern: Matrix Boundary Traversal (Layer by Layer)
// Trick: use 4 pointers (top, bottom, left, right) and traverse in 4 directions; shrink boundaries after each step; use if conditions to avoid duplicates
// Time Complexity: O(n*m)  Space Complexity: O(1) (excluding output)
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int n=matrix.size(); //number of rows
        int m=matrix[0].size(); //number of columns
        vector<int> ans;
        int top=0, bottom=n-1;
        int left=0, right=m-1;

        while(top<=bottom && left<=right)
        {
            for(int i=left;i<=right;i++)
            {
                ans.push_back(matrix[top][i]);
            }
            top++;
            for(int i=top;i<=bottom;i++)
            {
                ans.push_back(matrix[i][right]);
            }
            right--;
            if(top<=bottom)
            {
            for(int i=right;i>=left;i--)
            {
                ans.push_back(matrix[bottom][i]);
            }
            
            bottom--;
            }
            if(left<=right)
            {
            for(int i=bottom;i>=top;i--)
            {
                ans.push_back(matrix[i][left]);
            }
            left++;
            }
        }
        return ans;
    }
};