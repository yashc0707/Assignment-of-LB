class logic
{
    void Factor(int No)
    {
        
        for(int i=1;i<=No;i++)
        {
            if(No%i==0)
            {
                System.out.println(i);
            }
        }
        
    }

}

class DisplayFactor
{
    public static void main(String a[])
    {
        logic lobj=new logic();
        lobj.Factor(10);
    }
}