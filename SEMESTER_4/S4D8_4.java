class Hello implements Runnable
{
    public void run()
    {
        System.out.println("Hello");
        try
        {
            Thread.sleep(100);
        }
        catch(Exception e)
        {
            System.out.println(e);
        }
    }
}
class Hi implements Runnable
{
    public void run()
    {
        System.out.println("Hi");
        try
        {
            Thread.sleep(100);
        }
        catch(Exception e)
        {
            System.out.println(e);
        }
    }
}

class Program4
{
    public static void main(String[] args)
    {
        Thread t1 = new Thread(new Hello());
        Thread t2 = new Thread(new Hi());
        try
        {
            t1.start();
            t2.start();
        }
        catch (Exception e)
        {
            System.out.println(e);
        }
    }
}