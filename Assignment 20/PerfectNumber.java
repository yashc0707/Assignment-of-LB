class logic
{
    void CheckPerfect(int No)
    {
        int iSum=0;
        
        for(int i=1;i<=No/2;i++)
        {
           if(No%i==0)
           {
                iSum+=i;
           }
           
        }
        if(iSum==No)
        {
            System.out.println("It is an Perfect Number");
        }
        else
        {
            System.out.println("It is not an Perfect Number");
        }
    }

}

class PerfectNumber
{
    public static void main(String a[])
    {
        logic lobj=new logic();
        lobj.CheckPerfect(6);
    }
}