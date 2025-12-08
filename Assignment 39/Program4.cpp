#include<iostream>
using namespace std;

void Display()
{
    static char ch='A';

    if(ch<='F')
    {
        cout<<ch<<"\t";
        ch++;
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
