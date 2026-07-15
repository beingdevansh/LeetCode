class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        for(string s : words)
        {
            string temp = s;
            int l = 0;
            int r = s.size() - 1;
            while(l < r)
            {
                swap(temp[l], temp[r]);
                l++;
                r--;
            }

            if(temp == s)
            {
                return s;
            }
        }

        return "";
    }
};