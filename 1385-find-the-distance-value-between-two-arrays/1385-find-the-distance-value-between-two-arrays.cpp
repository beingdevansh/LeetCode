class Solution {
public:
    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {
        int count = arr1.size();
        for(int i = 0; i < arr1.size(); i++)
        {
            int j = 0;
            while(j < arr2.size())
            {
                if(abs(arr1[i] - arr2[j]) <= d)
                {
                    count--;
                    break;
                }
                j++;
            }
        }

        return count;
    }
};