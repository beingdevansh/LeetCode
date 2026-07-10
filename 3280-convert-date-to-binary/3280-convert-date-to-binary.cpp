class Solution {
public:
    string binary(string x)
    {
        int n = stoi(x);
        string binary = "";
        if(n == 0)
        {
            binary = "0";
        }

        else
        {
            while(n > 0)
            {
                binary += (n%2) + '0';
                n = n/2;
            }

            reverse(binary.begin(), binary.end());
        }

        return binary;
    }

    string convertDateToBinary(string date) {
        string a = date.substr(0,4);
        string b = date.substr(5,2);
        string c = date. substr(8,2);

        string ans = binary(a) + "-" + binary(b) + "-" + binary(c);

        return ans;
    }
};