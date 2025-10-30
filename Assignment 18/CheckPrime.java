class Logic
{
    void Prime(int n)
    {
        for(int iCnt=2;iCnt<n;iCnt++)
        {
            if(n%iCnt!=0)
            {
                
            }
        }
        System.out.println("Number is Prime");
    }

}
class CheckPrime
{
    public static void main(String a[])
    {
        Logic lobj=new Logic();
        lobj.Prime(11);


    }
}