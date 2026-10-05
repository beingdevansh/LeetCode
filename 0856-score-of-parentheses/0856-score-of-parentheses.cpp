class Solution {
public:
    int scoreOfParentheses(string s) {
        stack <char> st;
        int score = 0;
        for(char ch : s)
        {
            if(ch == '(')
            {
                st.push(score);
                score = 0;
            }

            else
            {
                score = st.top() + max(1, 2 * score);
                st.pop();
            }
        }

        return score;
    }
};