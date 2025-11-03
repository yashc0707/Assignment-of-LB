
class Logic
{
    void Grade(int Marks)
    {
        if(Marks<50)
        {
            System.out.println("C Grade");
        }
        if(Marks>50 && Marks<80)
        {
            System.out.println("B Grade");

        }
        if(Marks>80 && Marks<100)
        {
            System.out.println("A Grade");

        }
    }


}
class CheckGrade
{
    public static void main(String a[])
    {
        Logic obj=new Logic();
        obj.Grade(82);
    }
}