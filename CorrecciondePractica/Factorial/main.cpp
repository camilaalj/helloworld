#include <iostream>

using namespace std;

int factorialiterativo (int n){
    int a=2;int b=1;
    while (a<=n){
        b=b*a;
        a++;
    }
    return b;
}
int factorialrecursivo (int m, int a=2, int b=1){
    if (a<=m){
        return factorialrecursivo(m,a++,b*a);
    }
    else
        return b;
}
int main()
{
    int c;
    cin>>c;
    cout<<factorialrecursivo(c)<<endl;
    cout<<factorialiterativo(c)<<endl;
    return 0;
}
