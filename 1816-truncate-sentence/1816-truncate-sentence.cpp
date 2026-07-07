class Solution {
public:
    string truncateSentence(string s, int k) {
        string ans="";
        for(char ch : s) 
        {
            if(ch == ' ')
            {
                k--;
            }

            if(k == 0) 
            {
                break;
            }

            ans += ch;

        }

        return ans;
    }
};