class Solution {
public:
    int minMoves(vector<int>& nums) {
        int max = *max_element(nums.begin(), nums.end());
        long long moves = 0;
        for(int val : nums)
            moves += max - val;

        return moves;
    }
};