#include <vector>
using namespace std;

class Solution {
public:
    int firstPos(vector<int>& nums, int target)
    {
        int f = 0;
        int l = nums.size() - 1;
        int ans = -1;

        while(f <= l)
        {
            int mid = (f + l) / 2;

            if(nums[mid] == target)
            {
                ans = mid;
                l = mid - 1;
            }
            else if(nums[mid] < target)
            {
                f = mid + 1;
            }
            else
            {
                l = mid - 1;
            }
        }

        return ans;
    }

    int lastPos(vector<int>& nums, int target)
    {
        int f = 0;
        int l = nums.size() - 1;
        int ans = -1;

        while(f <= l)
        {
            int mid = (f + l) / 2;

            if(nums[mid] == target)
            {
                ans = mid;
                f = mid + 1;
            }
            else if(nums[mid] < target)
            {
                f = mid + 1;
            }
            else
            {
                l = mid - 1;
            }
        }

        return ans;
    }

    vector<int> searchRange(vector<int>& nums, int target) {
        return {firstPos(nums,target), lastPos(nums,target)};
    }
};