class EvenOddNumber
{
    void CheckEvenOdd(int n)
    {
        if(n%2==0)
        {
            System.out.println("Number is Even");
        }
        else
        {
            System.out.println("Number is Odd");
        }
    }

}

class CheckEvenOdd
{
    public static void main(String a[])
    {
        EvenOddNumber nobj=new EvenOddNumber();
        nobj.CheckEvenOdd(6);

    }
}