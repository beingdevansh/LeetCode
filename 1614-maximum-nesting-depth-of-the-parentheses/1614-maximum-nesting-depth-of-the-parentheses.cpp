class Solution {
public:
    int maxDepth(string s) {
        int ans = 0;
        int count = 0;
        for(char ch : s)
        {
            if(ch == '(')
                count++;

            if(ch == ')')
                count--;

            ans = max(ans, count);
        }

        return ans;
    }
};