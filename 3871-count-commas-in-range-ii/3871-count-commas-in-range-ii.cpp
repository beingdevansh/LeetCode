class Solution {
public:
    long long countCommas(long long n) {
        long long i = 1000, count = 0;
        while (i <= n) {
            count += n - i + 1;
            i *= 1000;
        }
        return count;
    }
};