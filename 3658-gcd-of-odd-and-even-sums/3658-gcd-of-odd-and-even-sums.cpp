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
        
        while(so != 0)
        {
            int rem = se%so;
            se = so;
            so = rem;
        }

        return se;
    }
};