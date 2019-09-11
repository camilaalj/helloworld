#include <iostream>

using namespace std;

int main()
{
    /**int a, b, c, d, e, f;
    cout<<"Ingrese un numero de 5 digitos"<<endl;
    cin>>a;
    b=a/10000;
    cout<<b<<'\t';
    c=a/1000;
    c=c%10;
    cout<<c<<'\t';
    d=a/100;
    d=d%10;
    cout<<d<<'\t';
    e=a/10;
    e=e%10;
    cout<<e<<'\t';
    f=a%10;
    cout<<f<<'\t';


    int a; int b=1; int c=0;
    cin>>a;
    while (a>=b){
        b=b*10;
        c++;
    }
    cout<<c<<endl;


    int num;
    cin>>num;
    int aux1= num/10000;
    int aux2= num%10;
    if (aux1 == aux2){
        num =num -(aux1*10000);
        num-=aux2;
        num/=10;
        if ((num/100)==(num%10))
            cout<<"Es palindromo"<<endl;
        else
            cout<<"No es palindromo"<<endl;
    }
    else
        cout<<"No es palindromo"<<endl;


    int num1= 1;
    int num2= 1;
    int s=0;
    int p;
    int k=1;
    cout<<"Ingrese posicion"<<endl;
    cin>>p;
    if (p<=k){
        cout<<k<<endl;
    }
    while (p>k){
        s=num1 + num2;
        num1 = num2;
        num2 = s;
        k++;
        cout<<s<<" , " <<endl;
    }


    char a;
    cin>>a;
    int m= static_cast<int>(a);
    if ((m>47)&& (m<58))
        cout<<"Es un numero"<<endl;
    else
        cout<<"No es numero"<<endl;*/


    char n;
    cin>>n;
    int m= static_cast<int>(n);
    if ((m>96) && (m<123)){
        cout<<"Es una letra"<<endl;
        m=m-32;
        char b=static_cast<int>(m);
        cout<<b<<endl;
    }
    if ((m>64) && (m<91)){
        cout<<"Es una letra"<<endl;
        m=m+32;
        char b=static_cast<int>(m);
        cout<<b<<endl;
    }

}
