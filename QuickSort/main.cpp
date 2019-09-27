#include <iostream>

using namespace std;

void Imprimir (int arr[],int tam){
    for(int i=0;i<tam;i++){
        cout<<arr[i]<<" ";
    }

}

void quickSort(int arr[], int tam){
    int f=tam-1;
    int i=0;
    int pivote=tam/2;
    while ((i<tam)&&(i<tam/2)){
        /**if ((arr[i]>arr[pivote])&&(arr[f]<arr[pivote])){
            swap(arr[i],arr[f]);
            i++;
            f--;
        }*/
        if (arr[i]<arr[pivote]&&(arr[pivote]>arr[f])){
            swap(arr[pivote],arr[f]);
            f--;
        }
        if (arr[f]>arr[pivote]&&(arr[f]>arr[i]))
            f--;
        if ((arr[i]>arr[pivote])&&(arr[pivote]>arr[f])){
            swap(arr[i],arr[f]);
            i++;
            f--;
        }
        if ((arr[i]>arr[pivote])&&(arr[f]>arr[pivote])){
            swap (arr[i],arr[pivote]);
            i++;
        }
        if ((arr[i]<arr[pivote])&&(arr[f]>arr[pivote])){
            swap (arr[f],arr[pivote]);
            f--;
        }
    }

}
int main()
{
    int x[5]/**={1,2,3,4,5}*/;
    for (int i=0;i<5;i++){
        cin>>x[i];
 }
    quickSort(x,5);
    Imprimir(x,5);
}
