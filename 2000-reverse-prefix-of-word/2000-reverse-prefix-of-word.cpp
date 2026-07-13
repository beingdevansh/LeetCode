class Solution {
public:
    string reversePrefix(string word, char ch) {
        if(word.find(ch) == -1)
        {
            return word;
        }

        string ans = "";
        for(int i = 0; i < word.size(); i++)
        {
            if(word.at(i) == ch)
            {
                string w = word.substr(0, i + 1);
                reverse(w.begin(), w.end());
                ans += w + word.substr(i+1,word.size() - i - 1);
                break;
            }
        }

        return ans;
    }
};