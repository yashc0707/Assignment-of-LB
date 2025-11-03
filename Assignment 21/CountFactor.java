class logic
{
    void Factor(int No)
    {
        int iCount=0;
        
        for(int i=1;i<=No;i++)
        {
            if(No%i==0)
            {
                iCount++;
            }
        }
        System.out.println(iCount);
        
    }

}

class CountFactor
{
    public static void main(String a[])
    {
        logic lobj=new logic();
        lobj.Factor(10);
    }
}