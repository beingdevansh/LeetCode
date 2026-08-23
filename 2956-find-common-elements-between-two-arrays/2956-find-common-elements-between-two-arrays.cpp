class Solution {
public:
    vector<int> findIntersectionValues(vector<int>& nums1, vector<int>& nums2) {
        int arr1[101] = {0};
        int arr2[101] = {0};

        for (int val : nums1) 
            arr1[val]++;

        for (int val : nums2) 
            arr2[val]++;

        int ans1 = 0;
        int ans2 = 0;

        for (int i = 0; i <= 100; i++) {
			if (arr1[i] && arr2[i]) {
				ans1 += arr1[i];
				ans2 += arr2[i];
			}
		}

        return {ans1, ans2};
    }
};