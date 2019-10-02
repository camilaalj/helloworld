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
    for (*a)

    }
}

void invertirre(int *arr, int tam){
    if (tam<*arr)
        return;
    swap(*arr,*(arr+tam-1));
    invertirre (arr++,tam-1);
}

int main()
{
    int x[5]={1,2,3,4,5};
    int tam=5;
    invertirit(x,5);
    invertirre(x,5);
    imprimir(x,5);
    cout<<sumait(x,5)<<endl;
    cout<<sumare(x,5)<<endl;
}
