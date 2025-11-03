class logic
{
    void FindSmallest(int No)
    {
        int min=No,digit;
        while(No>0)
        {
            digit=No%10;
            if(digit<min)
            {
                min=digit;
            }
            No=No/10;
        }
        System.out.println(min);
    }

}

class DisplaySmallest
{
    public static void main(String a[])
    {
        logic lobj=new logic();
        lobj.FindSmallest(82457);
    }
}