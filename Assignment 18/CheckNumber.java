class Logic
{
    void Number(int n)
    {
        if(n==0)
       {
            System.out.println("Number is Zero");
       }
       if(n>0)
       {
            System.out.println("Number is Positive");
       }
       if(n<0)
       {
            System.out.println("Number is Negative");
       }
    }

}
class CheckNumber
{
    public static void main(String a[])
    {
        Logic lobj=new Logic();
        lobj.Number(0);


    }
}