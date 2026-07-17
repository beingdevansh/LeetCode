class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int n;
        if(word1.size() > word2.size())
        {
            n = word2.size();
        }

        else
        {
            n = word1.size();
        }

        string res = "";
        int i = 0;
        while(i < n)
        {
            res += word1[i];
            res += word2[i];
            i++;
        }

        if(n == word2.size())
        {
            res += word1.substr(i);
        }

        else
        {
            res += word2.substr(i);
        }

        return res;
    }
};