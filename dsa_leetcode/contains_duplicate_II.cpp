class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map <int,int>mp = {};        // key -> value (index)
        int i,j; 
        for(int i=0;i<nums.size();i++)
        {
            if(mp.find(nums[i]) != mp.end())  // found the element in map
            {
                if(abs(i-mp[nums[i]])<=k)    // check if the absolute difference of indices is <= k
                    return true;
            }
            mp[nums[i]]=i;                   // update the index of the element
        }
        return false;
    }
};