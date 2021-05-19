class StringDivide {
    public static void main(String[] args) {
        String str = "Hello  World";
        int n = 4;
        int len = str.length(), temp=0, chars=len/n;
        String[] parts = new String[n];
        if(len%n != 0) {
            System.out.println("String cannot be divided into "+n+" equal parts.");
        }
        else {
            for(int i=0; i<len; i=i+chars) {
                String part = str.substring(i, i+chars);
                parts[temp] = part;
                temp++;
            }
            System.out.print(n+" equal parts are:\n");
            for(int j=0; j<parts.length; j++) {
                System.out.println(parts[j]);
            }
        }
    }
}