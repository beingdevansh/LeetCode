class Solution {
    public int[] rearrangeArray(int[] nums) {
        int ans[] = new int[nums.length];
        int p = 0, n = 1;
        for(int val : nums)
        {
            if(val > 0)
            {
                ans[p] = val;
                p += 2;
            }

            else
            {
                ans[n] = val;
                n += 2;
            }
        }

        return ans;
    }
}