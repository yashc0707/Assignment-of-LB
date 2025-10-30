class Logic
{
    void ReverseNumber(int n)
    {

        int iDigit=0;
        while(n>0)
        {
            iDigit=n%10;
            System.out.println(iDigit);
            n=n/10;
        }
    }
}
class Reverse
{
    public static void main(String a[])
    {
        Logic robj=new Logic();
        robj.ReverseNumber(1234);

    }
}