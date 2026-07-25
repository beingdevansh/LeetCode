class Solution {
public:
    int maxProduct(int n) {
        vector <int> a;
        for(char ch : to_string(n))
        {
            a.push_back(ch - '0');
        }

        sort(a.begin(), a.end());

        return a[a.size() - 1] * a[a.size() - 2];
    }
};