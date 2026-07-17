class Solution {
    public String mergeAlternately(String word1, String word2) {
        int n;
        if(word1.length() > word2.length())
        {
            n = word2.length();
        }

        else
        {
            n = word1.length();
        }

        int i = 0;
        String res = "";
        while(i < n)
        {
            res += word1.charAt(i);
            res += word2.charAt(i);
            i++;
        }

        if(n == word2.length())
        {
            res += word1.substring(i);
        }

        else
        {
            res += word2.substring(i);
        }

        return res;
    }
}