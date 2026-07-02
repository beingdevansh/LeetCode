class Solution {
public:
    bool isStrictlyPalindromic(int n) {
        for (int i = 2; i <= n - 2; i++) 
        {
            int temp = n;
            string result = "";
            while (temp > 0) {
                int digit = temp % i;
                result += to_string(digit);
                temp /= i;
            }

            string rev = result;
            reverse(rev.begin(), rev.end());
            if (result != rev) return false;
        }
        return true;
    }
};