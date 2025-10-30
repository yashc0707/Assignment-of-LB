class Logic
{
    void Digit(int n)
    {

        int iDigit=0;
        int iSum=0;
        while(n>0)
        {
            iDigit=n%10;
            iSum=iSum+iDigit;
            n=n/10;
        }
        System.out.println(iSum);
    }
}
class SumDigit
{
    public static void main(String a[])
    {
        Logic lobj=new Logic();
        lobj.Digit(1234);

    }
}