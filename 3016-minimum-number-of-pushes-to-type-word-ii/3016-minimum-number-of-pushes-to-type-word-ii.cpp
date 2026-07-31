class Solution {
public:
    int minimumPushes(string word) {
        vector<int> freq(26, 0);
        for (char ch : word) {
            freq[ch - 'a']++;
        }

        int push = 0;
        sort(freq.begin(), freq.end(), greater<int>());
        for (int i = 0; i < 26; i++) {
            push += freq[i] * ((i/8) + 1);
        }

        return push;
    }
};