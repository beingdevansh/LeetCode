class Solution {
public:
    vector<int> findIntersectionValues(vector<int>& nums1, vector<int>& nums2) {
        bool arr1[101] = {false};
        bool arr2[101] = {false};

        for (int val : nums1) {
            arr1[val] = true;
        }

        for (int val : nums2) {
            arr2[val] = true;
        }

        int ans1 = 0;
        int ans2 = 0;

        for (int val : nums1) {
            if (arr2[val]) {
                ans1++;
            }
        }

        for (int val : nums2) {
            if (arr1[val]) {
                ans2++;
            }
        }

        return {ans1, ans2};
    }
};