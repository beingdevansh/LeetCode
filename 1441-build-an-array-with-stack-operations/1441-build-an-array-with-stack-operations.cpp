class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        vector <string> ans;
        int curr = 1;
        int idx = 0;
        while(idx < target.size())
        {
            if(target[idx] == curr)
            {
                ans.push_back("Push");
                idx++;
            }
            else
            {
                ans.push_back("Push");
                ans.push_back("Pop");
            }
            curr++;
        }

        return ans;
    }
};