class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int count = 0;
        for(char ch : jewels)
        {
            for(char c : stones)
            {
                if(c == ch)
                {
                    count++;
                }
            }
        }

        return count;
    }
};