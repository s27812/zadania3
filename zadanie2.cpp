#include <iostream>
using namespace std;

int main()
{
    {
        char a;
        do
        {
            cout<<"Wprowadz znak z klawiatury: ";
            cin>> a;

        }while (a != 't');

    }
    return 0;
}