class Solution {
    public String mergeAlternately(String word1, String word2) {

        StringBuffer sb = new StringBuffer(word1.length() + word2.length());
        int n = Math.min(word1.length(),word2.length());

        int i = 0;
        while(i < n)
        {
            sb.append(word1.charAt(i));
            sb.append(word2.charAt(i));
            i++;
        }

        if(n == word2.length())
        {
            sb.append(word1.substring(i));
        }

        else
        {
            sb.append(word2.substring(i));
        }

        return sb.toString();
    }
}