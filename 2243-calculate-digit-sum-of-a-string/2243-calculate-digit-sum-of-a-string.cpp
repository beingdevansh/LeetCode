class Solution {
public:
    string digitSum(string s, int k) {
        if(s.size() <= k)
            return s;

        string ans = "";
        for(int i = 0; i < s.size(); i += k)
        {
            string temp = s.substr(i, k);
            int sum = 0;
            for(char ch : temp)
                sum += ch - '0';

            ans += to_string(sum);
        }

        if(ans.size() > k)
            return digitSum(ans, k);

        else
            return ans;
    }
};