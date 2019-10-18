#include <iostream>

using namespace std;

int tama (char *cad){
    int tam = 0;
    for (int i=0;*(cad+i)!=0;i++){
        tam++;
    }
    return tam;
}

int tamanore(char *cad){
    if (*cad =='\0')
        return 0;
    else
        return 1 + tamanore(++cad);
}

void invertir (char *cad){
    int t= tama (cad)/2;
    int tam= tama(cad)-1;
    for (int i=0;i<t;i++){
        swap(cad[i],cad[tam--]);
    }
}

void invertire (char *cad, char *cade){
    if (cade<cad)
        return;
    else{
        swap (*cad,*cade);
        return invertire(++cad, --cade);
    }
}

bool palindromo (char *cad){
    int t=tama(cad)-1;
    for (int i=0;i<t;i++){
        if (cad[i]==cad[t]){
            i++;
            t--;
            return true;
        }
        else
            return false;
    }
}

bool palindromore (char *cad,char *cade){
    if (cad!=cade)
        return false;
    else
        return palindromore(++cad,--cade);
        return true;

}

int main()
{
    char cadena[]="hola";
    char *cad=tama(cadena)+cadena-1;
    cout << cadena << endl;
    invertire(cadena,cad);
    cout << cadena << endl;
    //cout << tamanore(cadena)<<endl;
    cout<<palindromore(cadena,cad)<<endl;
}
