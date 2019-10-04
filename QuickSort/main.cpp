#include <iostream>

using namespace std;

void Imprimir (int arr[],int tam){
    for(int i=0;i<tam;i++){
        cout<<arr[i]<<" ";
    }

}

void quickSort(int arr[], int pi, int pf){
    int centro, i, j, pivote;
    centro = (pi+pf)/2;
    pivote = arr[centro];
    i = pi;
    j = pf;
    while(i<=j){
        while (arr[i] < pivote)
            i++;
        while (arr[j] >pivote)
            j--;
        if (i<=j){
            swap(arr[i],arr[j]);
            i++;
            j--;
        }
    }
    if (pi<j)
        quickSort(arr,pi,j);
    if (i<pf)
        quickSort(arr,i,pf);
}

int main()
{
    int x[5]/**={1,2,3,4,5}*/;
    for (int i=0;i<5;i++){
        cin>>x[i];
 }
    quickSort(x,0,4);
    Imprimir(x,5);
}
