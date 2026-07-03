class Solution {
public:
    int maxFreqSum(string s) {
        vector <int> freq(26,0);
        for(char ch : s)
        {
            freq[ch - 'a']++;
        }

        int mv = 0, mc = 0;
        for(char i = 'a'; i <= 'z'; i++)
        {
            if(string("aeiou").find(i) != string::npos)
            {
                mv = max(mv, freq[i - 'a']);
            }

            else
            {
                mc = max(mc, freq[i - 'a']);
            }
        }

        return mc + mv;
    }
};