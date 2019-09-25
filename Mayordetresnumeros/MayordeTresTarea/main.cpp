#include <iostream>

using namespace std;

int main()
{
    float a;
    float b;
    float c;
    cin>> a;
    cin>> b;
    cin>> c;
    if (a>b)
        if (a>c)
            cout<< a << " Es el numero mayor"<<endl;
    if (b>a)
        if (b>c)
            cout<< b << " Es el numero mayor"<<endl;
    if (c>a)
        if (c>b)
            cout<< c << " Es el numero mayor"<<endl;

    return 0;
}
