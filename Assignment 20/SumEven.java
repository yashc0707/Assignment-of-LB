class logic
{
    void Even(int No)
    {
        int iSum=0;
        for(int i=1;i<=No;i++)
        {
            if(i%2==0)
            {
                iSum=iSum+i;
            }
        }
        System.out.println(iSum);
    }

}

class SumEven
{
    public static void main(String a[])
    {
        logic lobj=new logic();
        lobj.Even(10);
    }
}