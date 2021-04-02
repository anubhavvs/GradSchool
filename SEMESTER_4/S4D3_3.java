class Square {
    int area;
    double radius;
    Square(int a) {
        area = a;
    }
    double getRadius() {
        radius = Math.sqrt(area);
        return radius;
    }
    double getPerimeter() {
        double perimeter = 4*radius;
        return perimeter;
    }
    public static void main(String[] args) {
        Square obj = new Square(144);
        obj.getRadius();
        System.out.println("Perimeter of Square: "+obj.getPerimeter());
    }
}