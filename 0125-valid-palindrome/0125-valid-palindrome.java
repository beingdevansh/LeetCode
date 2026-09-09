class Solution {
    public boolean isPalindrome(String s) {
        String temp = "";
        for(int i = 0; i < s.length(); i++)
        {
            if(Character.isLetterOrDigit(s.charAt(i)))
            {
                temp = temp + s.charAt(i);
            }
        }

        temp = temp.toLowerCase();

        StringBuffer sb = new StringBuffer(temp);

        if(temp.equals(sb.reverse().toString()))
        {
            return true;
        }

        else
        {
            return false;
        }
    }
}