class Solution {
public:
    int minMoves(vector<int>& nums) {
        int min = *min_element(nums.begin(), nums.end());
        long long ans = 0;
        for(int x : nums)
            ans += x - min;

        return ans;
    }
};