import java.util.*;

class Pattern
{
    public void Display(int iNo)
    {
        int iCnt=0,iCount=iNo;

        for(iCnt=iNo;iCnt>-iNo;iCnt--)
        {
            if((iCnt%2)==0 && iCnt!=iNo)
            {
                System.out.print("#\t");
            }
            else
            {
                System.out.print(iCount+"\t");
                iCount--;
            }
        }

    }
}
class Program2
{
    public static void main(String A[])
    {
        int iValue=0;

        Scanner sobj=new Scanner(System.in);
        System.out.println("Enter the number:");

        iValue=sobj.nextInt();

        Pattern pobj=new Pattern();
        pobj.Display(iValue);
    }
}