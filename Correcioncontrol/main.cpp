#include <iostream>

using namespace std;

class Polygon
{
    public:
        Polygon(){};
        Polygon(int a, int b):width(a),height(b){}
        int area(void){return 0;}
        void printarea(){
        cout<<this->area()<< '\n';
        }
    protected:
        int width, height;

    private:
};

class ArrayPolygon
{
    Polygon *arr;
    int size;
    public:
        ArrayPolygon(){
            this->size=0;
            this->arr = new Polygon[size];
        }
        ArrayPolygon(Polygon a[],int s){
            this->size=s;
            this->arr= new Polygon[size];
                for (int i=0;i<size;i++){
                    this->arr[i]=a[i];
                }
        }
        ArrayPolygon(ArrayPolygon &o){
            this->size=o.size;
            this->arr= new Polygon[o.size];
                for(int i=0;i<o.size;i++){
                    arr[i]=o.arr[i];
                }
        }
        ~ArrayPolygon(){
            delete[] arr;
        }
        void insertarFinal (Polygon o){
            size++;
            Polygon *tmp= new Polygon[size];
                for (int i=0;i<size;i++){
                    tmp[i]=arr[i];
                }
            tmp[size-1]=o;
            delete[] arr;
            arr=tmp;
        }
        void insertar (Polygon o, int pos){
            size++;
            Polygon *tmp= new Polygon[size];
                for (int i=0;i<pos;i++){
                    tmp[i]=arr[i];
                }
            tmp[pos]=o;
                for (int k=pos+1;k<size-1;k++){
                    tmp[k]=arr[k-1];
                }
            delete[] arr;
            arr=tmp;
        }
        void eliminar (){
            --size;
            Polygon *tmp= new Polygon[size];
                for (int i=0;i<size;i++){
                    tmp[i]=arr[i];
                }
            delete[] arr;
            arr=tmp;
        }
        void usarRedimension(int size){
            redimensionar(size);
        }
    private:
        Polygon *arreglo;
        void redimensionar(int size){
            Polygon *arreglo= new Polygon[size];
                for (int i=0;i<size;i++){
                    arreglo[i]=arr[i];
                }
            delete[] arr;
            this->size=size;
            arr=arreglo;
        }
};

int main()
{
    int tam=4;
    Polygon arre[tam];
    for (int i=0;i<tam;i++){
        arre[i]=Polygon(4,2);
        arre[i].printarea();
    }
    ArrayPolygon defecto();
    ArrayPolygon paramet(arre,tam);
    paramet.insertarFinal(Polygon(3,5));
    paramet.insertar(Polygon(3,5),2);
    paramet.eliminar();
    paramet.usarRedimension(6);
}
