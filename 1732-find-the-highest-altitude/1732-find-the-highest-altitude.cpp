class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        vector <int> altitudes(gain.size() + 1, 0);
        for(int i = 1; i <= gain.size(); i++)
            altitudes[i] = altitudes[i-1] + gain[i-1];

        return *max_element(altitudes.begin(), altitudes.end());
    }
};