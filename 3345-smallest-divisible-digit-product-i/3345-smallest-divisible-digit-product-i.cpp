class Solution {
public:
    int smallestNumber(int n, int t) {
        while(true)
        {
            int number = n;
            int p = 1;
            while(number != 0)
            {
                p *= number%10;
                number /= 10;
            }
            if(p%t == 0)
                break;
            
            else
                n++;
        }

        return n;
    }
};