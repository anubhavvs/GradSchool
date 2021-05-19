class StringCompare {
    public static void main(String[] args) {
        String str1 = "Hello John, how are you?";
        String str2 = "Hello John how are you?";
        String str3 = "Hello John, how are you?";

        boolean var1 = str1.equals(str2);
        System.out.println("str1 and str2 are same: "+ var1);

        boolean var2 = str1.equals(str3);
        System.out.println("str1 and str3 are same: "+var2);
    }
}