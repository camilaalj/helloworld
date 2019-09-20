#include <iostream>

using namespace std;

int main()
{
    int a=2;long long b= 600851475143;
    while (b>a){
        while (b%a==0){
            b/=a;
        }
        a++;
    }
    cout<<a<<endl;

    return 0;
}
