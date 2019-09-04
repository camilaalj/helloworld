# helloworld
Camila

#include <iostream>

using namespace std;

int main()
{
    /**int num;
    cout<<"Ingrese un numero de cinco digitos:"<<endl;
    cin>>num;
    int aux=num/10000;
    cout<<aux<<'\t';
    num -= aux *(10000);
    aux = num/1000;
    cout<<aux<<'\t';
    num -= aux *(1000);
    aux = num/100;
    cout<<aux<<'\t';
    num -= aux *(100);
    aux = num/10;
    cout<<aux<<'\t';
    num -= aux *(10);
    cout<<num%10<<'\t';*/

    /**int a; int b=1; int c=0;
    cout<<"Ingrese un numero"<<endl;
    cin>>a;
    while (a>=b){
        b=b*10;
        c++;
    }
    cout<<c<<endl;*/

    /**int num;
    cin>> num;
    int aux1= num/10000;
    int aux2= num%10;
    if (aux1 == aux2){
        num =num -(aux1*10000);
        num-=aux2;
        num/=10;
        if ((num/100)==(num%10)){
            cout<<"Es palindromo"<< "\n";
        }
    }*/

    /**int x=0, y=1, aux;
    int cont= 0, n;
    cin>>n;
    while (cont<n){
        cout<<x<<'\t';
        x=y;
        aux=x+y;
        y=aux;
    }*/

    char y;
    cin>>y;
    int x= static_cast<int>(y);
    if ((x>=48)&&(x<=57)){
        cout<<"Es un numero"<<"\n";
    }
    else
        cout<<"No es un numero"<<"\n";

    return 0;
}
