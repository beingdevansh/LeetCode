class Solution {
public:
    int gcdOfOddEvenSums(int n) {
        int se = 0, so = 0;
        for(int i = 1; i <= n * 2; i++)
        {
            if(i%2 == 0)
            {
                se += i;
            }

            else
            {
                so += i;
            }
        }
        
        int gcd = 1;
        for(int i = 1; i <= min(se,so); i++)
        {
            if(se%i == 0 && so%i == 0)
            {
                gcd = max(gcd,i);
            }
        }

        return gcd;
    }
};