class Solution {
public:
    double trimMean(vector<int>& arr) {
        sort(arr.begin(), arr.end());
        int n = arr.size();
        int m = 0;
        double c = 0.0;
        for(int i = (n*0.05); i < (n*0.95); i++)
        {
            m += arr[i];
            c++;
        }

        return m/c;
    }
};