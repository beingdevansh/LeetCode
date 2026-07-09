class Solution {
public:
    vector<int> countPoints(vector<vector<int>>& points, vector<vector<int>>& queries) {
        vector <int> ans;
        for(int i = 0; i < queries.size(); i++)
        {
            int count = 0;
            int x = queries[i][0];
            int y = queries[i][1];
            int r = queries[i][2];
            for(int j = 0; j < points.size(); j++)
            {
                int m = points[j][0];
                int n = points[j][1];
                int d = (x-m)*(x-m) + (y-n)*(y-n);
                if(d <= r*r)
                {
                    count++;
                }
            }
            ans.push_back(count);
        }

        return ans;
    }
};