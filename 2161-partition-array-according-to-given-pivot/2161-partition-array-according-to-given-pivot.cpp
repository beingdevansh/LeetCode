class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        vector <int> l;
        vector <int> g;
        vector <int> p;
        for(int val : nums)
        {
            if(val < pivot)
            {
                l.push_back(val);
            }

            else if(val == pivot)
            {
                p.push_back(val);
            }

            else
            {
                g.push_back(val);
            }
        }

        vector <int> res;
        res.reserve(nums.size());

        for(int val : l) res.push_back(val);
        for(int val : p) res.push_back(val);
        for(int val : g) res.push_back(val);

        return res;
    }
};