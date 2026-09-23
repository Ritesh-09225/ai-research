class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int minlen = nums.size() + 1;
        int sum = 0, left=0;
        for(int right = 0; right < nums.size(); right++ )
        {
             sum += nums[right];
            while(sum >= target)
            {
               if(right - left + 1 < minlen)
               {
                minlen = right-left + 1;
               }
               
               sum -= nums[left];
               left++;
               
            }
            
            
        }
        if(minlen <= nums.size())
        return minlen;
        else
        return 0;
    }
};