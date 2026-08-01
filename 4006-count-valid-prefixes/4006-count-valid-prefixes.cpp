class Solution {
public:
    int countValidPrefixes(string s) {
        int count = 0;
        int ones = 0;
        for(int i = 0; i < s.size(); i++)
            {
                if(s[i] == '1')
                    ones++;

                int zeroes = (i + 1) - ones;

                if(abs(zeroes - ones) <= 1)
                    count++;
            }

        return count;
    }
};