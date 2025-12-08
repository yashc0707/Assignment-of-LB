#include<iostream>
using namespace std;

void Display(int iNo,char ch)
{
    
    if((ch-'a'+1)<=iNo)
    {
        cout<<ch<<"\t";
        Display(iNo,ch+1);
    }
}

int main()
{
    int iValue=0;
    cout<<"Enter the Frequency:\n";
    cin>>iValue;

    cout<<"Inside main\n";
    Display(iValue,'a');
    cout<<"\nEnd of main\n";
    return 0;
}
