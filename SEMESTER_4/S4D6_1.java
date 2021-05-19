class StringOperations {
    StringBuffer reverse(String str) {
        StringBuffer s = new StringBuffer(str);
        return s.reverse();
    }
    String substring(String str) {
        return str.substring(str.length()/2);
    }
    public static void main(String[] args) {
        int choice = Integer.parseInt(args[0]);
        String input = args[1];
        StringOperations obj = new StringOperations();
        switch (choice) {
            case 1:
                System.out.println("1. Reverse: ");
                System.out.print(obj.reverse(input));
            case 2:
                System.out.println("2. Substring: ");
                System.out.print(obj.substring(input));
            case 3:
                System.out.println("3. Length: ");
                System.out.print(input.length());
            case 4:
                System.out.println("4. Character at index 5: ");
                System.out.print(input.charAt(5));
            case 5:
                System.out.println("5. Search in String: ");
                System.out.print(input.indexOf(obj.substring(input)));
        }
    }
}