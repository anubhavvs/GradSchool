class Interest {
    int principal, time;
    double rate, interest;
    Interest(int p, double r, int t ) {
        principal = p;
        rate = r;
        time = t;
    }
    double calculate() {
        interest = (principal*rate*time)/100;
        return interest;
    }
    public static void main(String[] args) {
        Interest obj = new Interest(10000, 6.5, 2);
        System.out.println("Interest amount: "+obj.calculate());
    }
}