class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector <int> ans(nums.size());
        int p = 0, n = 1;
        for(int val : nums)
        {
            if(val > 0)
            {
                ans[p] = val;
                p += 2;
            }

            else
            {
                ans[n] = val;
                n += 2;
            }
        }

        return ans;
    }
};