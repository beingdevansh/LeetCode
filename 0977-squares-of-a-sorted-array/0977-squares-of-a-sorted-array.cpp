class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector <int> ans(nums.size());
        int i = nums.size() - 1;
        int l = 0;
        int r = nums.size() - 1;
        while(i >= 0)
        {
            int x;
            if(abs(nums[l]) > abs(nums[r]))
            {
                x = nums[l];
                l++;
            }

            else
            {
                x = nums[r];
                r--;
            }

            ans[i] = x * x;
            i--;
        }

        return ans;
    }
};