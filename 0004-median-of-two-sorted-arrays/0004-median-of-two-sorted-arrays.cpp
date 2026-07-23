class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector <int> a;
        for(int val : nums1)
        {
            a.push_back(val);
        }

        for(int val : nums2)
        {
            a.push_back(val);
        }

        sort(a.begin(), a.end());
        int n = a.size();

        if(n%2 == 0)
        {
            return (a[n/2] + a[n/2 - 1])/2.0;
        }

        return a[n/2];
    }
};