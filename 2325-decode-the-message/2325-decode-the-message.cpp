class Solution {
public:
    string decodeMessage(string key, string message) {
        unordered_map <char, char> mp;
        char i = 'a';
        for(char ch : key)
        {
            if(ch == ' ')
                continue;
            
            if(mp.find(ch) == mp.end())
            {
                mp[ch] = i;
                i++;
            }
        }

        string msg = "";
        for(char ch : message)
        {
            if(ch == ' ')
                msg += ' ';
            else
                msg += mp[ch];
        }

        return msg;
    }
};