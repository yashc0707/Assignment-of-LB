class logic
{
    void CalculatePower(int base,int exp)
    {
        int result=1;
        for(int i=1;i<=exp;i++)
        {
            result=result*base;
        }
        System.out.println("Power is:"+result);
    }
}
class Power
{
    public static void main(String a[])
    {
        logic lobj=new logic();
        lobj.CalculatePower(2,5);
    }
}