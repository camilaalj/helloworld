#include <iostream>

using namespace std;

int main()
{
    /** 1°
    float a;
    cout<< "Ingrese un numero:" << endl;
    cin>> a;
    while (a > 1){
        a = a/2;
    }
    if (a == 1.0)
        cout << " Es un potencia de 2"<< endl;
    else
        cout << " No es potencia de 2"<< endl;*/

    /**2°
    int a; int b= 2; int c=0;
    cout<< "Ingrese un numero:" << endl;
    cin>> a;
    while (a>b){
        if (a%b == 0)
            c++;
        b++;
    }
    if (c==0){
        cout<<"Es un numero primo"<<endl;
    }
    else
        cout<< "No es un numero primo"<<endl;
    return 0;

    int a; int b= 2; int c=0;
    cout<< "Ingrese un numero:" << endl;
    cin>> a;
    for (int b=2; a > b; b++){
        if (a%b == 0)
            c++;
    }
    if (c==0)
        cout<< "Es un numero primo"<<endl;
    else
        cout<< "No es un numero primo"<<endl;
    return 0;*/
    /**3°*/
    int a=2;int b =2;int c=0;
    while (a<100){
        while (a>b){
            if (a%b == 0)
                c++;
            b++;
        if (c==0)
            cout<<a<<endl;
        }
        a++;
        c=0;
    }

    /** 4°

    int a; int b = 1; int c = 0;
    cout<< "Ingrese un numero:" << endl;
    cin>> a;
    while (a>b){
        if (a%b==0)
            c=c+b;
        b++;
    }
    if (c==a)
        cout<<a<< " Es un numero perfecto"<< endl;
    else
        cout<<a<<" No es un numero perfecto"<< endl;

    return 0;
    int a; int b = 1; int c = 0;
    cout<< "Ingrese un numero:" << endl;
    cin>> a;
    for (int b=1; a>b; b++){
        if (a%b==0)
            c=c+b;
    }
    if (c==a)
        cout<<a<< " Es un numero perfecto"<< endl;
    else
        cout<<a<<" No es un numero perfecto"<< endl;*/

    return 0;
}
