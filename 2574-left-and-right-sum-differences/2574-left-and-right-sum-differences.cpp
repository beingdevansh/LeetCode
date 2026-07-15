class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        int n = nums.size();
        vector <int> lsum(n,0);
        vector <int> rsum(n,0);

        int l = 0, r = 0;

        for(int i = 0; i < n; i++)
        {
            lsum[i] = l;
            rsum[n - 1 - i] = r;
            
            l += nums[i];
            r += nums[n - 1 - i];
        }

        vector <int> ans;

        for(int i = 0; i < nums.size(); i++)
        {
            ans.push_back(abs(lsum[i] - rsum[i]));
        }

        return ans;
    }
};