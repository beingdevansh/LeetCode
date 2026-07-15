class Solution {
public:
    string reverseWords(string s) {
        s += " ";
        string ans = "";
        int sp = 0;
        for(int i = 0; i < s.size(); i++)
        {
            if(s.at(i) == ' ')
            {
                string word = s.substr(sp,i-sp);
                sp = i+1;
                int l = 0;
                int r = word.size() - 1;
                while(l < r)
                {
                    swap(word[l], word[r]);
                    l++;
                    r--;
                }

                ans += word + " ";
            }
        }

        ans.pop_back();
        return ans;
    }
};