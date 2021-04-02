class test1 {
    public static void main(String[] args) {
        int s1 = 0, s2 = 0;
        for(int i=0; i<args.length; i++) {
            int x = Integer.parseInt(args[i]);
            s1 += x*x;
            s2 += x;
        }
        s2 = s2*s2;
        System.out.println("Sum of Squares: "+s1);
        System.out.println("Square of Sums: "+s2);
    }
}