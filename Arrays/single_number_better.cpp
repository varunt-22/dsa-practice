//Tc->NlogM+O(n/2 +1) where N is the length of the array and M is size of the map
                      //we store n/2 elements because each element appears twice and one element
                      //is appearing once hence n/2+1
// space complexity is O(n/2 +1)

//NlogM the logM can vary if we use unordered map->the best case is O(n) and O(n^2) if worse


class Solution {
public:
    int singleNumber(vector<int>& nums) {
        map<int,int> mpp;
        for(int i=0;i<nums.size();i++)
        {
            mpp[nums[i]]++;
        }
        for(auto it:mpp)
        {
            if(it.second==1)
                return it.first;
        }
        return -1;
    }
};
