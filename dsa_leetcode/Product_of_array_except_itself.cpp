class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector <int> leftProduct (n, 1);
        vector <int> RightProduct (n, 1);

        for(int i=0; i<n-1;i++)
        {
            leftProduct[i+1] = leftProduct[i] * nums[i];
        }

        for(int i=n-2; i>=0;i--)
        {
            RightProduct[i] = RightProduct[i+1] * nums[i+1];
        }

        for(int i=0; i<n; i++)
        {
            nums[i] = leftProduct[i] * RightProduct[i];
        }
        return nums;

    }
};