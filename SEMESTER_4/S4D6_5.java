class Tokenize {
    public static void main(String[] args) {
        String s = "Hello, How are you.";
        String word = "";
        for(int i=0; i<s.length(); i++) {
            if(s.charAt(i) == ' ' || s.charAt(i) == '.') {
                System.out.println(word);
                word = "";
            }
            else
                word += s.charAt(i);
        }
    }
}