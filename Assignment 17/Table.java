class Logic
{
    void DisplayTable(int n)
    {
        for(int iCnt=1;iCnt<=10;iCnt++)
        { 
            int iDigit=iCnt*n;
            System.out.println(iDigit);
        }
    }
}
class Table
{
    public static void main(String a[])
    {
        Logic lobj=new Logic();
        lobj.DisplayTable(5);

    }
}