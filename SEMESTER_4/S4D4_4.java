class Sort {
    public static void main(String[] args) {
        String temp;
        for (int i = 0; i < args.length; i++)
        {
            for (int j = i + 1; j < args.length; j++) {
                if (args[i].compareTo(args[j])>0)
                {
                    temp = args[i];
                    args[i] = args[j];
                    args[j] = temp;
                }
            }
        }
        for(int j=0; j<args.length; j++) {
            System.out.println(args[j]);
        }
    }
}