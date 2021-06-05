class Box
{
    int l,b,h;
    Box(int l1,int b1,int h1)
    {
        l = l1;
        b = b1;
        h = h1;
    }
    Box(Box obj)
    {
        this.l = obj.l;
        this.b = obj.b;
        this.h = obj.h;
    }
    int getVolume()
    {
        return (l*b*h);
    }
}

class Program8
{
    public static void main(String[] args)
    {
        int a,b,c;
        a=Integer.parseInt(args[0]);
        b=Integer.parseInt(args[1]);
        c=Integer.parseInt(args[2]);
        Box obj1 = new Box(a,b,c);
        Box obj2 = new Box(obj1);
        System.out.println("Volume of Box1 is: "+obj1.getVolume());
        System.out.println("Volume of Box2 is: "+obj2.getVolume());
    }
}