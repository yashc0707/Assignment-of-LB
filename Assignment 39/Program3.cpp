#include<iostream>
using namespace std;

void Display()
{
    static int iCnt=5;

    if(iCnt>=1)
    {
        cout<<iCnt<<"\t";
        iCnt--;
        Display();
    }
}

int main()
{
    cout<<"Inside main\n";
    Display();
    cout<<"\nEnd of main\n";
    return 0;
}
