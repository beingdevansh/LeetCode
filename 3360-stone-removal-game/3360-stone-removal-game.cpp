class Solution {
public:
    bool canAliceWin(int n) {
        int  i = 10;
        bool flag = true;
        while(n >= i)
        {
            n -= i;
            i--;
            flag = !flag;
        }

        return !flag;
    }
};