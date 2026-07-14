class Solution {
public:
    double minimumAverage(vector<int>& n) {
        double ans = DBL_MAX;
        sort(n.begin(), n.end());
        for(int i = 0, j = n.size() - 1; i < j; i++, j--)
        {
            ans = min(ans,((n[i] + n[j])/2.0));
        }

        return ans;
    }
};