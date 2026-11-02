class Solution {
public:
    int minMoves2(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int med = nums[nums.size()/2];
        long long ans = 0;
        for(int val : nums)
            ans += abs(val - med);

        return ans;
    }
};