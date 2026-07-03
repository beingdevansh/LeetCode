class Solution {
public:
    string reversePrefix(string s, int k) {
        string str = s.substr(0,k);
        reverse(str.begin(), str.end());

        return str + s.substr(k,s.size());
    }
};