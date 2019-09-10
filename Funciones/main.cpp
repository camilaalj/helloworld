#include <iostream>

using namespace std;

/**void ImprimirDigitos(int a){
    int b, c, d, e, f;
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
}


int ContarDigitos(int a){
    int b=1; int c=0;
    while (a>=b){
        b=b*10;
        c++;
    }
    return c;
}


bool EsPalindromo(int num){
    int aux1= num/10000;
    int aux2= num%10;
    if (aux1 == aux2){
        num =num -(aux1*10000);
        num-=aux2;
        num/=10;
        if ((num/100)==(num%10))
            return true;
        else
            return false;
    }
}


int CalcularFibo(int p){
    int num1= 1;
    int num2= 1;
    int s=0;
    int k=1;
    if (p<=k){
        return k;
    }
    while (p>k){
        s=num1 + num2;
        num1 = num2;
        num2 = s;
        k++;
    }
    return s;
}


bool EsNumero(char a){
int m= static_cast<int>(a);
if ((m>47)&& (m<58)){
    return true;
}
else {
    return false;
}
}


bool EsLetra (char a){
int m= static_cast<int>(a);
if ((m>96)&&(m<123)){
    return true;
}
if ((m>64)&&(m<91)){
    return true;
}
else
    return false;
}


char ConvertirMayuscula(char a){
int m= static_cast<int>(a);
if ((m>96)&&(m<123)){
    m=m-32;
    char b=static_cast<int>(m);
    return b;
}
}*/


char ConvertirMinuscula(char a){
int m= static_cast<int>(a);
if ((m>64)&&(m<91)){
    m=m+32;
    char b=static_cast<char>(m);
    return b;
}
}


int main()
{
   char n;
   //int n;
   cin>>n;
//   ImprimirDigitos(n);
// cout<<ContarDigitos(n);
// cout<< EsPalindromo(n);
// cout<<CalcularFibo(n);
// cout<<EsNumero(n);
// cout<<EsLetra(n);
// cout<<ConvertirMayuscula(n);
cout<<ConvertirMinuscula(n);
}


