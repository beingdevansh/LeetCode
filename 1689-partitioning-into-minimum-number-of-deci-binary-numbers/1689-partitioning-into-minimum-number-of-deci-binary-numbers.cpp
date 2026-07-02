class Solution {
public:
    int minPartitions(string n) {
        set <int> st;
        for(char ch : n)
        {
            st.insert(ch - '0');
        }

        int max = *max_element(st.begin(), st.end());

        return max;
    }
};