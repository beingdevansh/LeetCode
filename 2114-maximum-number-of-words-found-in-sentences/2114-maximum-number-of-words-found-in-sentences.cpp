class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int ans = 0;
        for(int i = 0; i < sentences.size(); i++)
        {
            string s = sentences[i];
            int count = 0;
            for(char ch : s)
            {
                if(ch == ' ')
                {
                    count++;
                }
            }
            ans = max(count,ans);
        }

        return ans + 1;
    }
};