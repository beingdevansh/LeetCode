class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int vote = 0;
        int candidate = 0;

        for(int val : nums)
        {
            if(vote == 0)
                candidate = val;

            if(val == candidate)
                vote++;

            else
                vote--;
        }

        return candidate;
    }
};