class logic
{
    void EvenOdd(int No)
    {
        int iEven=0;
        int iOdd=0;
        for(int i=1;i<=No;i++)
        {
            if(i%2==0)
            {
                iEven=iEven+i;
            }
            else
            {
                iOdd=iOdd+i;
            }
        }
        System.out.println(iEven);
        System.out.println(iOdd);
    }

}

class CountEvenOdd
{
    public static void main(String a[])
    {
        logic lobj=new logic();
        lobj.EvenOdd(10);
    }
}