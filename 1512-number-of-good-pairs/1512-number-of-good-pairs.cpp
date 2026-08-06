class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int count = 0;
        vector <int> freq(101,0);
        for(int val : nums)
            freq[val]++;

        for(int i : freq)
            count += (i * (i - 1))/2;

        return count;
    }
};