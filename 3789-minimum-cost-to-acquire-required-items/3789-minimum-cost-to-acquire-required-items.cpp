class Solution {
public:
    long long minimumCost(int cost1, int cost2, int costBoth, int need1, int need2) {
        long long c1 = cost1, c2 = cost2, cb = costBoth;
        long long n1 = need1, n2 = need2;
        long long a = min(c1 + c2, cb) * min(n1, n2);
        long long b = (n1 - min(n1, n2)) * min(c1, cb);
        long long c = (n2 - min(n1, n2)) * min(c2, cb);

        return a + b + c;
    }
};