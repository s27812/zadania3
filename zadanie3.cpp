#include <iostream>
#include <math.h>
using namespace std;

float a;
float b;
float c;
float delta;
float x;
float x1;
float x2;

int main()
{
    cout<<"Funkcja f(x)=ax^2+bx+c\n"<<endl;

    cout<<"Podaj liczbe a: ";
    cin>>a;
    
    cout<<"Podaj liczbe b: ";
    cin>>b;

    cout<<"Podaj liczbe c: ";
    cin>>c;

    cout<<"Postac ogolna funkcji f(x)="<<a<<"x^2+"<<b<<"x+"<<c<<"."<<endl;
    delta = (b*b)-(4*a*c);
    if (delta>0)
    {
        x1=(-b-sqrt(delta))/(2*a);
        x2=(-b+sqrt(delta))/(2*a);
        cout<<"Wynik to :\nx1 ="<<x1<<"\nx2 = "<<x2<<endl;
    }
    if (delta==0)
    {
        x=b/(2*a);
        cout<<"Wynik to :\n x = "<<x;
    }
    if(delta<0)
    {
        cout<<"Brak rozwiazan"<<endl;
    }


    system("pause");
    return 0;
}