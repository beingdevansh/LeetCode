class Solution {
public:
    double minimumAverage(vector<int>& nums) {
        vector <float> avg;
        while(nums.size()/2 != 0)
        {
            int min = *min_element(nums.begin(), nums.end());
            int max = *max_element(nums.begin(), nums.end());

            avg.push_back((min + max)/2.0);

            auto it = find(nums.begin(), nums.end(), min);
            if(it != nums.end()) {nums.erase(it);}

            it = find(nums.begin(), nums.end(), max);
            if(it != nums.end()) {nums.erase(it);}
        }
        return *min_element(avg.begin(), avg.end());
    }
};