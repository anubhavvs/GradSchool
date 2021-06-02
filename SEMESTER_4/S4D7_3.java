class SumAndAverage {
    public static void main(String[] args) {
        long sum = 0;
        int count = 0;
        double average;
        int lower = 111;
        int upper = 8899;
        for(int i=lower; i<=upper; i++) {
            sum += i;
            count++;
        }
        average = sum/(double)count;
        System.out.println("Sum: "+sum+"\nCount: "+count+"\nAverage: "+average);
    }
}