class Days {
    public static void main(String[] args) {
        String[] months = {"January","February","March","April","May","June","July","August","September","October", "November","December"};
        int[] days= { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
        for(int i=0; i<months.length; i++) {
            System.out.println(months[i] + " has " + days[i] + " days.");
        }
    }
}