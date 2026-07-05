class Solution {
public:
    int findPermutationDifference(string s, string t) {
        int ans = 0;
        for(char ch : s)
        {
            int a = s.find(ch);
            int b = t.find(ch);

            ans += abs(a - b);
        }

        return ans;
    }
};