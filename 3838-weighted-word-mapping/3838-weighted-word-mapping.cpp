class Solution {
public:
    string mapWordWeights(vector<string>& words, vector<int>& weights) {
        string res = "";
        for(int  i = 0; i < words.size(); i++)
        {
            int sum = 0;
            string word = words[i];
            for(char ch : word)
            {
                sum  += weights[ch - 'a'];
            }
            
            int mod = sum%26;
            char c = 'z' - mod;
            res += c;
        }

        return res;
    }
};