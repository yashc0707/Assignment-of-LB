
class Logic
{
    void Divisibility(int Number)
    {
        if(Number%5==0 && Number%11==0)
        {
            System.out.println("Number is Divisible by 5 and 11");
        }
        else
        {
            System.out.println("Number is not Divisible by 5 and 11");
        }
    }


}
class CheckDivisiblity
{
    public static void main(String a[])
    {
        Logic obj=new Logic();
        obj.Divisibility(55);
    }
}