class Solution {
public:
    vector<int> transformArray(vector<int>& nums) {
        for(int i = 0; i < nums.size(); i++)
        {
            if(nums[i]%2 == 0)
            {
                nums[i] = 0;
            }

            else
            {
                nums[i] = 1;
            }
        }

        int count = 0;
        for(int val : nums)
        {
            if(val == 0)
            {
                count++;
            }
        }

        for(int i = 0; i < count; i++)
        {
            nums[i] = 0;
        }

        for(int i = count; i < nums.size(); i++)
        {
            nums[i] = 1;
        }
        
        return nums;
    }
};