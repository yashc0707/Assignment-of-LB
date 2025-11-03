class logic
{
    void FindLargest(int No)
    {
        int max=0,digit;
        while(No>0)
        {
            digit=No%10;
            if(digit>max)
            {
                max=digit;
            }
            No=No/10;
        }
        System.out.println(max);
    }

}

class DisplayLargest
{
    public static void main(String a[])
    {
        logic lobj=new logic();
        lobj.FindLargest(83457);
    }
}