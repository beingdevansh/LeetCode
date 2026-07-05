class Solution {
public:
    string interpret(string command) {
        string ans = "";
        for(int i = 0; i < command.size(); i++)
        {
            if(command.at(i) == 'G')
            {
                ans += "G";
            }

            else if(command.substr(i, 2) == "()")
            {
                ans += "o";
                i += 1;
            }

            else
            {
                ans += "al";
                i += 3;
            }
        }

        return ans;
    }
};