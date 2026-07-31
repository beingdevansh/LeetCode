class Solution {
public:
    int minimumPushes(string word) {
        vector<int> freq(26, 0);
        for (char ch : word) {
            freq[ch - 'a']++;
        }

        int push = 0;
        sort(freq.begin(), freq.end(), greater<int>());
        for (int i = 0; i < 8; i++) {
            push += freq[i];
        }

        for (int i = 8; i < 16; i++) {
            push += freq[i] * 2;
        }

        for (int i = 16; i < 24; i++) {
            push += freq[i] * 3;
        }

        for (int i = 24; i < 26; i++) {
            push += freq[i] * 4;
        }

        return push;
    }
};