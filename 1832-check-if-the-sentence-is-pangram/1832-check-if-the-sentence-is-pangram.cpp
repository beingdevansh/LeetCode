class Solution {
public:
    bool checkIfPangram(string s) {
        if(s.size() < 26)
            return false;

        bool freq[26];
        for(char ch : s)
            freq[ch - 'a'] = true;

        for(bool b : freq)
            if(!b)
                return false;

        return true;
    }
};