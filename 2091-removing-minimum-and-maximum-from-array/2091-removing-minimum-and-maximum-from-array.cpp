class Solution {
public:
    int minimumDeletions(vector<int>& nums) {

        if(nums.size() <= 2)
            return nums.size();

        auto maxptr = max_element(nums.begin(), nums.end());
        auto minptr = min_element(nums.begin(), nums.end());

        int p1 = maxptr - nums.begin();
        int p2 = minptr - nums.begin();

        int i = min(p1, p2);
        int j = max(p1, p2);

        int front = j + 1;
        int back = nums.size() - i;
        int side = i + 1 + nums.size() - j;

        return  min({front, back, side});
    }
};