class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        vector <int> res;
        for(int val : nums)
        {
            if(val < pivot)
            {
                res.push_back(val);
            }
        }

        for(int val : nums)
        {
            if(val == pivot)
            {
                res.push_back(val);
            }
        }

        for(int val : nums)
        {
            if(val > pivot)
            {
                res.push_back(val);
            }
        }

        return res;
    }
};