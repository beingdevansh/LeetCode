class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        int min = *min_element(nums.begin(), nums.end());
        int max = *max_element(nums.begin(), nums.end());
        vector <bool> check(max - min  + 1);
        for(int val : nums)
        {
            check[val - min] = true;
        }

        vector <int> ans;
        for(int i = 0; i < max - min; i++)
        {
            if(!check[i])
                ans.push_back(i + min);
        }

        return ans;
    }
};