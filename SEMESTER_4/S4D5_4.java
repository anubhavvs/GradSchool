class Date {
    int month, day;
    int[] days= {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    public Date(int m, int d) {
        month = m;
        day = d;
    }
    boolean check() {
        boolean m = month>12 || month<1;
        if(m)
            return false;
        boolean d = days[month-1] < day;
        if(d)
            return false;
        return true;
    }
    void change() {
        day++;
        while(!check()){
            month++;
            day=1;
        }
        System.out.println("Next day: "+day+"/"+month);
    }
    public static void main(String[] args) {
        Date obj = new Date(Integer.parseInt(args[0]), Integer.parseInt(args[1]));
        if(obj.check())
            obj.change();
        else
            System.out.println("Invalid Date!");
    }
}