#include <iostream>

using namespace std;

int main()
{
int b=1; int c=0; int n;
cin>>n;
int a=n-1;
while (a>=1){
    while (a>=b){
        if (a%b==0){
            c=c+b;
        }
        b++;
    }
    if (c==a)
        cout<<c<<endl;
    b=1;
    c=0;
    a--;
}
    return 0;
}
