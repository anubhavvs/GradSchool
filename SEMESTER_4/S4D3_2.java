class Cylinder {
    int radius, height;
    Cylinder(int r, int h) {
        radius = r;
        height = h;
    }
    double area() {
        double area = 2*Math.PI*radius*height + 2*Math.PI*radius*radius;
        return area;
    }
    public static void main(String[] args) {
        Cylinder obj = new Cylinder(10, 12);
        System.out.println("Surface Area: "+obj.area());
    }
}