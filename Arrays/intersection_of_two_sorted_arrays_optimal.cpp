// Problem: Intersection of Two Sorted Arrays
// Pattern: Two Pointers
// Trick: compare both elements → move smaller pointer → if equal add to answer and move both
// Time Complexity: O(n + m)  Space Complexity: O(1)

#include<bits/stdc++.h>
using namespace std;

vector<int> findArrayIntersection(vector<int> &arr1, int n, vector<int> &arr2, int m)
{
	int i=0;
	int j=0;
	vector<int> ans;
	while(i<n && j<m)
	{
		if(arr1[i]<arr2[j])
		{
			i++;
		}
		else if(arr2[j]<arr1[i])
		{
			j++;
		}
		else
		{
			ans.push_back(arr1[i]);
			i++;
			j++;
		}
	}
	return ans;
}