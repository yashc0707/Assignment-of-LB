
class Logic
{
    void CheckLeapyear(int Year)
    {
        if(Year%4==0 && Year%100!=0 || Year%400==0)
        {
            System.out.println("Year Is Leap Year");
        }
        else
        {
            System.out.println("Year Is Not Leap Year");

        }
    }


}
class LeapYear
{
    public static void main(String a[])
    {
        Logic obj=new Logic();
        obj.CheckLeapyear(2024);
    }
}