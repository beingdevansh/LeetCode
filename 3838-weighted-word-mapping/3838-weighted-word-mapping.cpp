class Solution {
public:
    string mapWordWeights(vector<string>& words, vector<int>& weights) {
        string res = "";
        for(auto str : words)
        {
            int sum = 0;
            for(char ch : str)
            {
                sum  += weights[ch - 'a'];
            }

            sum %= 26;
            res += ('z' - sum);
        }

        return res;
    }
};