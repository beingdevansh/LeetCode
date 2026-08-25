class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        vector<int> freq(101, 0);

        for(int val : nums)
            freq[val]++;

        int i = k;

        while(i <= 100) {
            if(freq[i] == 0)
                return i;

            i += k;
        }

        return i;
    }
};