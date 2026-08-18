class Solution {
public:
    int largestInteger(vector<int>& nums, int k) {
        int n = nums.size();
        unordered_map <int, int> mp;
        for(int val : nums)
        {
            mp[val]++;
        }

        if(k == n)
            return *max_element(nums.begin(), nums.end());

        if(k == 1)
        {
            int maxval = -1;
            for(int val : nums)
            {
                if(mp[val] == 1)
                    maxval = max(maxval, val);
            }

            return maxval;
        }

        if(mp[nums[0]] == 1 && mp[nums[n - 1]] == 1)
            return max(nums[0], nums[n - 1]);

        if(mp[nums[0]] == 1 && mp[nums[n - 1]] > 1)
            return nums[0];

        if(mp[nums[0]] > 1 && mp[nums[n - 1]] == 1)
            return nums[n - 1];

        return -1;
    }
};