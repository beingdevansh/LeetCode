class Solution {
public:
    string makeSmallestPalindrome(string s) {
        int i = 0;
        int j = s.size() - 1;
        while(i <= j)
        {
            if(s[i] != s[j])
            {
                char ch = min(s[i], s[j]);
                if(ch == s[i])
                    s[j] = ch;

                else
                    s[i] = ch;
            }

            i++;
            j--;
        }

        return s;
    }
};