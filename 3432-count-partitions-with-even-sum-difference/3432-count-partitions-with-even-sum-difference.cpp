class Solution {
public:
    int countPartitions(vector<int>& nums) {
        int count = 0;
        int l = 0;
        int r = accumulate(nums.begin(), nums.end(), 0);
        for(int i = 0; i < nums.size() - 1; i++)
        {
            l += nums[i];
            r -= nums[i];

            if(abs(l - r)%2 == 0)
            {
                count++;
            }
        }

        return count;
    }
};