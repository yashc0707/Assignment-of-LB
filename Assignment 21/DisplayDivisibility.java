class logic
{
    void Check(int No)
    {
        
       
        if(No%2==0 && No%3==0)
        {
            System.out.println("It is Divisible");
        }
        else
        {
            System.out.println("It is Not Divisible");
        }
       
        
    }

}

class DisplayDivisibility
{
    public static void main(String a[])
    {
        logic lobj=new logic();
        lobj.Check(10);
    }
}