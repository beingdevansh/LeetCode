class Solution {
public:
    vector<int> intersection(vector<int>& a, vector<int>& b) {
        unordered_set <int> st(a.begin(), a.end());
        vector <int> ans;
        for(int val : b)
        {
            if(st.find(val) != st.end())
            {
                ans.push_back(val);
                st.erase(val);
            }
        }
        return ans;

    }
};