class Clock {
    int hours, minutes, seconds;
    public Clock(int h, int m, int s) {
        hours = h;
        minutes = m;
        seconds = s;
    }
    boolean validity() {
        boolean h = hours>23 || hours<0;
        boolean m = minutes>59 || minutes<0;
        boolean s = seconds>59 || seconds<0;
        if(h || m || s) {
            return false;
        }
        return true;
    }
    void convert(String str) {
        int h1 = (int)str.charAt(0) - '0';
        int h2 = (int)str.charAt(1)- '0';
        int hh = h1 * 10 + h2;
        String x;
        if (hh < 12) {
            x = "AM";
        }
        else
            x = "PM";
        hh %= 12;
        if (hh == 0) {
            System.out.print("12");
            for (int i = 2; i < 8; ++i) {
                System.out.print(str.charAt(i));
            }
        }
        else {
            System.out.print(hh);
            for (int i = 2; i < 8; ++i) {
                System.out.print(str.charAt(i));
            }
        }
        System.out.println(" "+x);
    }
    public static void main(String[] args) {
        Clock obj = new Clock(Integer.parseInt(args[0]), Integer.parseInt(args[1]), Integer.parseInt(args[2]));
        if(!obj.validity()) {
            System.out.println("Invalid time format!");
        }
        else {
            System.out.println("Valid");
        }
        String str = args[0]+":"+args[1]+":"+args[2];
        obj.convert(str);
    }
}