class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector <int> x = heights;
        int m = x[0];
        for(int i = 0; i < x.size(); i++)
        {
            m = max(x[i], m);
        }

        vector<int> count(m + 1, 0);
        for(int i = 0; i < x.size(); i++)
        {
            count[x[i]]++;
        }

        for(int i = 1; i <= m; i++)
        {
            count[i] += count[i - 1];
        }

        int out[x.size()];
        for(int i = x.size() - 1; i >= 0; i--)
        {
            out[count[x[i]] - 1] = x[i];
            count[x[i]]--;
        }

        for(int i = 0; i < x.size(); i++)
        {
            x[i] = out[i];
        }


        int ans = 0;
        for(int i = 0; i < x.size(); i++)
        {
            if(x[i] != heights[i])
            {
                ans++;
            }
        }

        return ans;
    }
};