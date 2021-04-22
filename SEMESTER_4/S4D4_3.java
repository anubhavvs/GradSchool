class Arrange {
    public static void main(String[] args) {
        Integer[] x = new Integer[args.length];
        int temp;
        for(int i=0; i<args.length; i++) {
            x[i] = Integer.parseInt(args[i]);
        }
        for (int i = 0; i < x.length; i++) {
            for (int j = i+1; j < x.length; j++) {
                if(x[i] > x[j]) {
                    temp = x[i];
                    x[i] = x[j];
                    x[j] = temp;
                }
            }
        }
        System.out.println("Sorted order:");
        for(int j=0; j<x.length; j++) {
            System.out.print(x[j]+", ");
        }
    }
}