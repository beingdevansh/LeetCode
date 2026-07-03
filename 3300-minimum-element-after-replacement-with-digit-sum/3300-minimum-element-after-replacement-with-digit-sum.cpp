class Solution {
public:
    int minElement(vector<int>& nums) {
        int ans= 100000;
        for(int val : nums)
        {
            int sum = 0;
            for(char ch : to_string(val))
            {
                sum += ch - '0';
            }
            ans = min(ans,sum);
        }

        return ans;
    }
};