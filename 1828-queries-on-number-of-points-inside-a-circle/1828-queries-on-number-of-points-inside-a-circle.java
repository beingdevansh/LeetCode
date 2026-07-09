class Solution {
    public int[] countPoints(int[][] points, int[][] queries) {
        int ans[] = new int[queries.length];
        for(int i = 0; i < queries.length; i++)
        {
            int count = 0;
            int x = queries[i][0];
            int y = queries[i][1];
            int r = queries[i][2];
            for(int j = 0; j < points.length; j++)
            {
                int m = points[j][0];
                int n = points[j][1];
                int d = (x-m)*(x-m) + (y-n)*(y-n);
                if(d <= r*r)
                {
                    count++;
                }
            }
            ans[i] = count;
        }

        return ans;
    }
}