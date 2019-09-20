#include <iostream>

using namespace std;

int main()
{
    int a=3;int c=0;
    while (a<1000000){
        if (a%3==0){
            c=c+a;
        }
        if (a%5==0){
            c=c+a;
        }
        a++;
    }
    cout << "La suma de los multiplos de 3 y 5 menores a 1000000 es: "<<c<<endl;
    return 0;
}

