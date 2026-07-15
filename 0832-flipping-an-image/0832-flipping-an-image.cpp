class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        vector<vector<int>> ans(image.size());
        for (int i = 0; i < image.size(); i++) {
            int l = 0;
            int r = image[i].size() - 1;
            while (l <= r) {
                if (l == r) {
                    image[i][l] ^= 1;
                } else {
                    image[i][l] ^= 1;
                    image[i][r] ^= 1;
                    swap(image[i][l], image[i][r]);
                }
                l++;
                r--;
            }
        }

        return image;
    }
};