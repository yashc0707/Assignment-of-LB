class Logic
{
    void EvenOdd(int n)
    {
        int iSumEven=0;
        int iSumOdd=0;
        for(int iCnt=1;iCnt<=n;iCnt++)
        {
            if(iCnt%2==0)
            {
                iSumEven=iSumEven+iCnt;

            }
            else
            {
                iSumOdd=iSumOdd+iCnt;
            }
        }
        System.out.println(iSumEven);
        System.out.println(iSumOdd);
    }

}
class SumEvenOdd
{
    public static void main(String a[])
    {
        Logic lobj=new Logic();
        lobj.EvenOdd(5);


    }
}