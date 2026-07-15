class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        for(string s : words)
        {
            bool flag = true;
            int l = 0;
            int r = s.size() - 1;
            while(l < r)
            {
                if(s[l] != s[r])
                {
                    flag = false;
                    break;
                }
                l++;
                r--;
            }

            if(flag)
            {
                return s;
            }
        }

        return "";
    }
};