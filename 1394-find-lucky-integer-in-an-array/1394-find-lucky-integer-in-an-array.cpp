class Solution {
public:
    int findLucky(vector<int>& arr) {
        unordered_map <int, int> mp;
        for(int val : arr)
            mp[val]++;

        int ans = -1;
        for(int val : arr)
        {
            if(mp[val] == val)
                ans = max(ans, val);
        }

        return ans;
    }
};