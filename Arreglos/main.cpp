#include <iostream>

using namespace std;

void Imprimir (int arr[],int tam){
    for(int i=0;i<tam;i++){
        cout<<arr[i]<<" ";
    }

}

int Sumarit(int arr[],int tam){
    int suma=0;
    for(int i=0;i<tam;i++){
        suma+=arr[i];
    }
    return suma;

}

int Sumarre(int arr[], int tam, int suma=0, int i=0){
    if (tam==1)
        return (arr[0]);

    else
        return arr[tam-1]+Sumarre(arr,tam-1);

}

void Swap(int&x,int&y){
    int temp=x;
    x=y;
    y=temp;
}

void Invertirit(int arr[],int tam){
    int q = tam/2;
    tam-=1;
    for (int i=0;i<q;i++){
        Swap(arr[i],arr[tam]);

        /**int e= arr[i];
        arr[i]=arr[tam];
        arr[tam--]=e;*/
    }
}

/**void Invertirre(int arr[],int tam){
    if
}*/

int main()
{
 int x[5]={1,4,2,3,5};
 /**for (int i=0;i<5;i++){
    cin>>x[i];
 }*/
 Imprimir(x,5);
 cout<<Sumarit(x,5)<<endl;
 cout<<Sumarre(x,5)<<endl;
 Invertirit(x,5);
}
