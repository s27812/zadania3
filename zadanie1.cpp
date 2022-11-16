#include <iostream>
using namespace std;

float x;
float y;


int main()
{   
    cout<<"Podaj x = ";
    cin>>x;
    cout<<"Podaj y = ";
    cin>>y;
    
    
    cout<<"Suma tych dwoch liczb to: ";
    printf ("%.2f", x+y);
    cout<<endl;
    
    cout<<"Roznica tych dwoch liczb to: ";
    printf ("%.2f", x-y);
    cout<<endl;

    cout<<"Iloczyn tych dwoch liczb to: ";
    printf ("%.2f", x*y);
    cout<<endl;
    
    cout<<"Iloraz tych dwoch liczb to: ";
    printf ("%.2f", x/y);
    cout<<endl;
    

    return 0;
}