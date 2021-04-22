class Palindrome {
    static boolean isPalindrome(String str) {
        int i = 0, j = str.length() - 1;

        while (i < j) {
            if (str.charAt(i) != str.charAt(j))
                return false;
            i++;
            j--;
        }
        return true;
    }
    public static void main(String[] args) {
        if(isPalindrome(args[0].toLowerCase()))
            System.out.println("Palindrome!");
        else
            System.out.println("Not Palindrome!");
    }
}