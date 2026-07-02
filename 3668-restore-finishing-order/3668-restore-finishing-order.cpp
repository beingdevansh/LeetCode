class Solution {
public:
    vector<int> recoverOrder(vector<int>& order, vector<int>& friends) {
        unordered_set <int> A(friends.begin(), friends.end());
        vector <int> res;

        for(int val : order)
        {
            if(A.count(val))
            {
                res.push_back(val);
            }
        }
        return res;
    }
};