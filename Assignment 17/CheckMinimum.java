class Logic
{
    void Number(int a,int b,int c)
    {
        if(a<b && a<c)
        {
            System.out.println(a);
        }
        if(b<c && b<a)
        {
            System.out.println(b);
        }
        else
        {
            System.out.println(c);
        }
    }
}
class CheckMinimum
{
    public static void main(String a[])
    {
        Logic lobj=new Logic();
        lobj.Number(44,34,55);

    }
}