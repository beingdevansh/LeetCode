class Stack {
    public:
    int * a;
    int size;
    int top;

    public:
    Stack(int s)
    {
        size = s;
        top = -1;
        a = new int[s];
    }

    void push(int val)
    {
        if(top < size - 1)
        {
            top++;
            a[top] = val;
        }
    }

    char pop()
    {
        if(top >= 0)
        {
            char ch = a[top];
            top--;
            return ch;
        }

        return '\0';
    }
};

class Solution {
public:
    bool isValid(string s) {
        Stack st(s.size());
        for (char ch : s) {
            if (ch == '(' || ch == '{' || ch == '[') {
                st.push(ch);
            }

            else {
                char c = st.pop();
                if (c == '\0') {
                    return false;
                }

                if ((ch == ')' && c != '(') ||
                    (ch == '}' && c != '{') ||
                    (ch == ']' && c != '[')) {
                    return false;
                }
            }
        }

        return st.pop() == '\0';
    }
};