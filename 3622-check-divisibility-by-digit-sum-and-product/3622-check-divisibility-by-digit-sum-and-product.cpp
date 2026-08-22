class Solution {
public:
    bool checkDivisibility(int n) {
        int t = n;
        int s = 0;
        int p = 1;
        while(t != 0)
        {
            int d = t%10;
            s += d;
            p *= d;
            t /= 10;
        }

        return (n%(s + p) == 0);
    }
};