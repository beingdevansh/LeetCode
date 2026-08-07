class Solution {
public:
    double trimMean(vector<int>& arr) {
        sort(arr.begin(), arr.end());
        int n = arr.size()*0.05;
        int m = 0;
        for(int i = n; i < arr.size() - n; i++)
        {
            m += arr[i];
        }

        return m/(arr.size() - 2.0*n);
    }
};