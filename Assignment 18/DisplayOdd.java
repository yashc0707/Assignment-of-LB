class Logic
{
    void Odd(int n)
    {
        for(int iCnt=0;iCnt<=n;iCnt++)
        {
            if(iCnt%2!=0)
            {
                System.out.println(iCnt);

            }
        }
    }

}
class DisplayOdd
{
    public static void main(String a[])
    {
        Logic lobj=new Logic();
        lobj.Odd(20);


    }
}