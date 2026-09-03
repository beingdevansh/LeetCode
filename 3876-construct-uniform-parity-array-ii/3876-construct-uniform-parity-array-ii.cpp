class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        int mn = nums1[0];
        for(int val : nums1)
        {
            mn = min(val, mn);
        }

        if(mn%2) return true;

        for(int val : nums1)
        {
            if(val%2)
                return false;
        }

        return true;
    }
};