class Solution {
    public int[] getFinalState(int[] nums, int k, int multiplier) {
        while(k-- > 0)
        {
            int minidx = 0;
            for(int i = 1; i < nums.length; i++)
            {
                if(nums[i] < nums[minidx])
                {
                    minidx = i;
                }

                
            }
            nums[minidx] *= multiplier;
        }

        return nums;
    }
}