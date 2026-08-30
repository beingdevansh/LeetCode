class Solution {
public:
    int minimumDeletions(vector<int>& nums) {

        if(nums.size() <= 2)
            return nums.size();

        int p1 = 0;
        int p2 = 0;

        for(int i = 0; i < nums.size(); i++)
        {
            if(nums[i] < nums[p1]) p1 = i;
            if(nums[i] > nums[p2]) p2 = i;
        }

        int i = min(p1, p2);
        int j = max(p1, p2);

        int front = j + 1;
        int back = nums.size() - i;
        int side = i + 1 + nums.size() - j;

        return  min({front, back, side});
    }
};