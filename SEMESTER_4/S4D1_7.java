class Pattern {
    public static void main(String[] args) {
        int num = Integer.parseInt(args[0]);
        for (int i=1; i<=num; i++) {
            for (int j=1; j<=i; j++) {
                System.out.print("*\t");
            }
            System.out.print("\n");
        }
    }
}