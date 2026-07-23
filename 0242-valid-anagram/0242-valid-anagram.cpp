class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size() != t.size())
            return false;

        unordered_map <char, int> m;
        for(char ch : s)
            m[ch]++;

        for(char ch : t)
        {
            m[ch]--;
            if(m[ch] == 0)
                m.erase(ch);
        }

        if(m.empty())
            return true;

        return false;
    }
};