class Solution {
    public int differenceOfSum(int[] nums) {
        int e = 0;
        int d = 0;
        for(int val : nums)
        {
            e += val;
            while(val != 0)
            {
                d += val%10;
                val /= 10;
            }
        }

        return e - d;
    }
}