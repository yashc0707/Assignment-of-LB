class Logic
{
    void Even(int n)
    {
        for(int iCnt=0;iCnt<=n;iCnt++)
        {
            if(iCnt%2==0)
            {
                System.out.println(iCnt);

            }
        }
    }

}
class DisplayEven
{
    public static void main(String a[])
    {
        Logic lobj=new Logic();
        lobj.Even(20);


    }
}