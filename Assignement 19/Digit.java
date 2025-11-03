
class Logic
{
    void DisplayDigit(int Number)
    {
        int iDigit=0;
        while(Number>0)
        {
            iDigit=Number%10;
                      
            Number=Number/10;
        }
    }


}
class Digit
{
    public static void main(String a[])
    {
        Logic obj=new Logic();
        obj.DisplayDigit(9845);
    }
}