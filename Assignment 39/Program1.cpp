#include<iostream>
using namespace std;

void Display()
{
    static int iCnt=1;

    if(iCnt<=5)
    {
        cout<<"*\t";
        iCnt++;
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
