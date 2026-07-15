class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        vector<vector<int>> ans(image.size());
        for(int i = 0; i < image.size(); i++)
        {
            int l = 0;
            int r = image[i].size() - 1;
            while(l < r)
            {
                swap(image[i][l], image[i][r]);
                l++;
                r--;
            }
        }

        for(int i = 0; i < image.size(); i++)
        {
            for(int j = 0; j < image[i].size(); j++)
            {
                if(image[i][j] == 1)
                {
                    ans[i].push_back(0);
                }

                else
                {
                    ans[i].push_back(1);
                }
            }
        }

        return ans;   
    }
};