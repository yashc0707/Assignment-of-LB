class Logic
{
    void CountDigi(int n)
    {

        int iDigit=0;
        int iCount=0;
        while(n>0)
        {
            iDigit=n%10;
            iCount++;
            n=n/10;
            
        }
        System.out.println(iCount);
    }
}
class CountDigit
{
    public static void main(String a[])
    {
        Logic lobj=new Logic();
        lobj.CountDigi(1233333);

    }
}