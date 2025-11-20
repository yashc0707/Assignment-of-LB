import java.util.*;

class Pattern
{
    public void Display(int iNo)
    {
        int iCnt=0,iCount=1;

        for(iCnt=1;iCnt<=(iNo*2);iCnt++)
        {
            if((iCnt%2)==0)
            {
                System.out.print("*\t");
            }
            else
            {
                System.out.print(iCount+"\t");
                iCount++;
            }
        }

    }
}
class Program3
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