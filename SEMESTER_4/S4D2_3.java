class Calculate {
    public static void main(String[] args) {
        int evenSum=0, evenLength=0, oddSum=0, oddLength=0;
        for(int i=0; i<args.length; i++)
        {
            int j = Integer.parseInt(args[i]);
            if(j%2==0)
            {
                evenSum += j;
                evenLength++;
            }
            else
            {
                oddSum += j;
                oddLength++;
            }
        }
        float evenAverage = (float) evenSum / evenLength;
        float oddAverage = (float) oddSum / oddLength;
        System.out.println("For Even Numbers:\nSum: "+evenSum+" Average: "+evenAverage);
        System.out.println("For Odd Numbers:\nSum: "+oddSum+" Average: "+oddAverage);
    }
}