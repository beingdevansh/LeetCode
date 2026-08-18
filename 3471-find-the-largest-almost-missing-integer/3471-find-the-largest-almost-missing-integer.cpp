class Solution {
public:
    int largestInteger(vector<int>& nums, int k) {
        int n = nums.size();
        vector <int> freq(51,0);
        for(int val : nums)
            freq[val]++;

        if(k == n)
            return *max_element(nums.begin(), nums.end());

        int ans = -1;

        if(k == 1)
        {
            for(int val : nums)
            {
                if(freq[val] == 1)
                    ans = max(ans, val);
            }

            return ans;
        }

        if(freq[nums[0]] == 1)
            ans = max(ans, nums[0]);

        if(freq[nums[n - 1]] == 1)
            ans = max(ans, nums[n - 1]);

        return ans;
    }
};