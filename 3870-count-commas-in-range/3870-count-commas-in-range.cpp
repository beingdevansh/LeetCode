class Solution {
public:
    int countCommas(int n) {
        if(to_string(n).size() < 4)
            return 0;

        return n - 999; 
    }
};