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
        double median;
        int n = a.size();

        if(n%2 != 0)
        {
            median = a[(n+1)/2 - 1];
        }

        else
        {
            median = (a[(n/2) - 1] + a[(n/2)])/2.0;
        }

        return median;
    }
};