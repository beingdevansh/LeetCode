class Solution {
public:
    vector<int> intersection(vector<int>& a, vector<int>& b) {
        vector <int> ans;
        set <int> st1(a.begin(), a.end());
        set <int> st2(b.begin(), b.end());

        set_intersection(st1.begin(), st1.end(),
                            st2.begin(), st2.end(),
                            back_inserter(ans));
        return ans;

    }
};