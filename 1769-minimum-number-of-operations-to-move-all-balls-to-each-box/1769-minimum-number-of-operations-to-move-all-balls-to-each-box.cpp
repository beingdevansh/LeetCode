class Solution {
public:
    vector<int> minOperations(string boxes) {
        vector <int> ans(boxes.size(), 0);
        for(int i = 0; i < boxes.size(); i++)
        {
            int j = 0;
            while(j < boxes.size())
            {
                if(boxes[j] == '1')
                {
                    ans[i] += abs(i - j);
                }

                j++;
            }
        }

        return ans;
    }
};