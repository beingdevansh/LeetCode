class Solution {
public:
    bool canPlaceFlowers(vector<int>& a, int n) {
        int count = 0;
        for(int i = 0; i < a.size(); i++)
        {
            if(a[i] == 0)
            {
                bool rempty = (i == a.size() - 1) || (a[i + 1] == 0);
                bool lempty = (i == 0) || (a[i - 1] == 0);
                if(rempty && lempty)
                {
                    a[i] = 1;
                    count++;
                }
            }
        }

        return count >= n;
    }
};