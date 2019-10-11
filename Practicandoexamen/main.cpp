#include <iostream>

using namespace std;

void imprimir(int arr[], int tam){
    for (int i=0;i<tam;i++)
        cout<< arr[i]<< ' ';
}

void revertir(int arr[], int tam){
    int t= tam/2;
    tam=tam-1;
    for (int i=0;i<t;i++){
        swap(arr[i],arr[tam--]);
    }
}
void palindromo (int arr[], int tam){
    int i=0;
    int t=tam-1;
    int ta=tam/2;
    while (i<=ta){
        if(arr[i++]==arr[t--]){
            if (i==ta)
                cout<<"Es palindromo"<<endl;
        }
        else{
            cout<<"No es palindromo"<<endl;
            i=i+tam;
        }
    }
}

int pow(int x, int y){
    int c=1;
    for (int i=0;i<y;i++){
        c=c*x;
    }
    return c;
}

int numerobase (int base, int numerobase10){
    int res=0;
    int cociente=numerobase10;
    int modulo=0;
    int i=0;
    while (cociente!=0){
        modulo=cociente%base;
        cociente=cociente/base;
        res= (modulo*pow(10,i))+res;
        i++;
    }
    return res;
}

int main()
{
    /**int x[5];
    for (int i=0;i<5;i++){
        cin>>x[i];
    }
    revertir(x,5);
    imprimir(x,5);
    palindromo(x,5);*/
    int basenueva,base10;
    cout<<"Ingrese un numero en base 10: ";
    cin>>base10;
    cout<<"Ingrese la base a la que lo desea convertir: ";
    cin>>basenueva;
    cout<<numerobase(basenueva,base10);
}
