class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int n = nums.size();

        if(k > n) return -1;

        int windowSum = 0;

        // Calculate first window
        for(int i = 0; i < k; i++)
        {
            windowSum += nums[i];
        }

        int maxSum = windowSum;

        // Slide the window
        for(int i = k; i < n; i++)
        {
            windowSum = windowSum + nums[i] - nums[i-k];

            maxSum = max(maxSum, windowSum);
        }

        return (double)maxSum / k;
    }
};