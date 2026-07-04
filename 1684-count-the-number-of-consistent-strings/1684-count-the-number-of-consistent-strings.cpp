class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        vector<int> freq(26, 0);

        for(char ch : allowed)
        {
            freq[ch - 'a'] = 1;
        }

        int ans = 0;

        for(string word : words)
        {
            bool ok = true;

            for(char ch : word)
            {
                if(freq[ch - 'a'] == 0)
                {
                    ok = false;
                    break;
                }
            }

            if(ok) ans++;
        }

        return ans;
    }
};