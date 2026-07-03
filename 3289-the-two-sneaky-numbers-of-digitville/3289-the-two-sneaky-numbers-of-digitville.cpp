class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
        int max = *max_element(nums.begin(), nums.end());
        vector <int> count(max + 1,0);
        for (int x : nums) 
        {
            count[x]++;
        }

        vector <int> ans;
        for(int i = 0; i < count.size(); i++)
        {
            if(count[i] > 1)
            {
                ans.push_back(i);
            }
        }

        return ans;
    }
};