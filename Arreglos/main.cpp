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

int Sumarre(int arr[], int tam){
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
        Swap(arr[i],arr[tam--]);
    }
}

void Invertirre(int arr[],int tam,int i=0){
    if (tam<i)
        return;
    Swap(arr[i],arr[tam-1]);
    Invertirre(arr,tam-1,i+1);
}


void BubbleSort(int arr[], int tam){
    for(int i=0;i<tam;i++){
        for (int e=0; e<tam-1 ;e++){
            if (arr[e]>arr[e+1]){
                Swap(arr[e],arr[e+1]);
            }
        }
    }
}

void InsertionSort(int arr[], int tam){
    for(int i=0;i<tam;i++){
        int val=arr[i];
        int e=i;
        while ((e>0)&&(arr[e-1]>val)){
            Swap(arr[e],arr[e--]);
        }
        arr[e]=val;
    }
}

void QuickSort(int arr[], int tam){
    int f=tam-1;
    int i=0;
    int pivote=(tam/2)-1;
    while ((i<pivote)&&(f>pivote)){
        if ((arr[i]>arr[pivote])&&(arr[f]<arr[pivote])){
            Swap(arr[i],arr[f]);
            i++;
            f--;
        }
        if (arr[i]<arr[pivote])
            i++;
        if (arr[f]>arr[pivote])
            f--;
    }

}

int main()
{
 int x[5]/**={1,2,3,4,5}*/;
 for (int i=0;i<5;i++){
    cin>>x[i];
 }
 cout<<Sumarit(x,5)<<endl;
 cout<<Sumarre(x,5)<<endl;
 //Invertirit(x,5);
 //Invertirre(x,5);
 //InsertionSort(x,5);
 QuickSort(x,5);
 //BubbleSort(x,5);
 Imprimir(x,5);
}
