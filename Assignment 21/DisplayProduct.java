class logic
{
    void DigitProduct(int No)
    {
        int mul=1,digit;
        while(No>0)
        {
            digit=No%10;
            mul=mul*digit;
            No=No/10;
        }
        System.out.println(mul);
    }

}

class DisplayProduct
{
    public static void main(String a[])
    {
        logic lobj=new logic();
        lobj.DigitProduct(123);
    }
}