class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map <int, int> mp;
        for(int val : nums)
            mp[val]++;

        for(auto i : mp)
            if(i.second > nums.size()/2.0) 
                return i.first;

        return -1;
    }
};