class Factorial
{
    void DisFactorial(int n)
    {
        int iFactorial=1;
        for(int iCnt=1;iCnt<=n;iCnt++)
        {
            iFactorial=iFactorial*iCnt;
        }
        System.out.println("Factorial is:"+iFactorial);
    }
}
class DisplayFactorial
{
    public static void main(String a[])
    {
        Factorial fobj=new Factorial();
        fobj.DisFactorial(5);
    }
}