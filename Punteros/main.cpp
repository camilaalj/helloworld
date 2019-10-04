#include <iostream>

using namespace std;

void imprimir (int *arr, int tam){
    while(tam--){
        cout<<*arr<<" ";
        arr++;
    }
    cout<<endl;
}

int sumait (int *arr, int tam){
    int suma=0;
    while(tam--){
        suma+=*arr;
        arr++;
    }
    return suma;
}

int sumare (int *arr, int tam){
    if(tam==1)
        return *arr;
    else
        return *(arr+tam-1)+sumare (arr,tam-1);
        //return *arr+sumare(arr+1,tam-1);
}

void Swap(int&x,int&y){
    int temp=x;
    x=y;
    y=temp;
}

void Swap(int*ptr1, int*ptr2){
    int temp=*ptr1;
    *ptr1=*ptr2;
    *ptr2=temp;
}


void invertirit(int *arr, int tam){
    int q = tam/2;
    tam-=1;
    for (int i=0;i<q;i++){
        Swap(*(arr+i),*(arr+tam));
        tam--;
    }
}

void invertirre(int *arr, int tam,int i=0){
    if (tam<i)
        return;
    swap(*(arr+i),*(arr+tam-1));
    invertirre (arr,tam-1,i+1);
}

void BubbleSort(int *arr, int tam){
    for(int i=0;i<tam;i++){
        for (int e=0; e<tam-1 ;e++){
            if (*(arr+e)>*(arr+e+1)){
                Swap(*(arr+e),*(arr+e+1));
            }
        }
    }
}

void InsertionSort(int *arr, int tam){
    for(int i=0;i<tam;i++){
        int val=*(arr+i);
        int e=i;
        while ((e>0)&&(*(arr+e-1)>val)){
            Swap(*(arr+e),*(arr+e-1));
            e--;
        }
        *(arr+e)=val;
    }
}

int main()
{
    int x[5]={1,7,4,3,8};
    int tam=5;
    //invertirit(x,5);
    //invertirre(x,5);
    //BubbleSort(x,5);
    //InsertionSort(x,5);
    imprimir(x,5);
    cout<<sumait(x,5)<<endl;
    cout<<sumare(x,5)<<endl;
}
