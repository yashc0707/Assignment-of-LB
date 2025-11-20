import java.util.*;

class Pattern
{
    public void Display(int iRow,int iCol)
    {
        int i=0,j=0;

        for(i=1;i<=iRow;i++)
        {
            for(j=1;j<=iCol;j++)
            {
                System.out.print("*\t");
            }
            System.out.println();

        }
    }
}
class Program1
{
    public static void main(String a[])
    {
        int iValue1=0,iValue2=0;

        Scanner sobj=new Scanner(System.in);

        System.out.println("Enter the number of Rows:");
        iValue1=sobj.nextInt();

        System.out.println("Enter the number of Colomns:");
        iValue2=sobj.nextInt();

        Pattern pobj=new Pattern();
        pobj.Display(iValue1,iValue2);
    }

}