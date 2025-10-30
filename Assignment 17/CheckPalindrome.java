class Logic
{
    void Palindrome(int n)
    {
        int iNumber=n;
        int iRev=0;
        int iDigit=0;
        while(n>0)
        {
            iDigit=n%10;
            iRev=iRev*10+iDigit;
            n=n/10;
        }

        if(iNumber==iRev)
        {
            System.out.println("Number is Palindrome");
        }
        else
        {
            System.out.println("Number is not Palindrome");

        }
    }

}
class CheckPalindrome
{
    public static void main(String a[])
    {
        Logic lobj=new Logic();
        lobj.Palindrome(121);


    }
}