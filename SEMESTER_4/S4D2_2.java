class Max {
    public static void main(String[] args) {
        int max = Integer.parseInt(args[0]);
        for(int i=0; i<args.length; i++) {
            int j = Integer.parseInt(args[i]);
            if(j > max)
            {
                max = j;
            }
        }
        System.out.println("Maximum Number: "+max);
    }
}