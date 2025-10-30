class Natural
{
    void CalculateSum(int n)
    {
        int isum=0;
        for(int i=1;i<=n;i++)
        {
            isum=isum+i;
        }
        System.out.println("sum of First.."+n+"..Natural Number is:"+isum);
    }

}

class DisplayNatural
{
    public static void main(String a[])
    {
        Natural nobj=new Natural();
        nobj.CalculateSum(10);

    }
}