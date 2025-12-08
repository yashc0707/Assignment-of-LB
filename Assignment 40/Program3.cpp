#include<iostream>
using namespace std;

void Display(int iNo)
{
    static int iCnt=iNo;

    if(iCnt>=1)
    {
        cout<<iCnt<<"\t";
        iCnt--;
        Display(iNo);
    }
}

int main()
{
    int iValue=0;
    cout<<"Enter the frequency:\n";
    cin>>iValue;

    cout<<"Inside main\n";
    Display(iValue);
    cout<<"\nEnd of main\n";
    return 0;
}
