class Logic
{
    void Number(int a,int b)
    {
        if(a>b)
        {
            System.out.println(a);
        }
        else
        {
            System.out.println(b);
        }
    }
}
class CheckMaximum
{
    public static void main(String a[])
    {
        Logic lobj=new Logic();
        lobj.Number(44,34);

    }
}