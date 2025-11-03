class logic
{
    void DisplayReverse(int No)
    {
        
        for(int i=No;i>=1;i--)
        {
           System.out.println(i);
        }
    }

}

class Reverse
{
    public static void main(String a[])
    {
        logic lobj=new logic();
        lobj.DisplayReverse(10);
    }
}