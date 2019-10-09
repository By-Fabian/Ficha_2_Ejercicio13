#include <iostream>

using namespace std;

int main() {
    string palabra=0;
    int contador=0;

    cout<<"Ingrese palabra";
    cin>>palabra;
    for(char caracter:palabra){
        if(caracter=='a'||caracter=='e'||caracter=='i'||caracter=='o'||caracter=='u')
            contador=contador+1;
    }
    if(contador==0){
        cout<<"No tiene vocales"<<endl;
    }
    else{
        int* array=new int[contador];
        int i=0;
        for (char caracter:palabra){
            if(caracter=='a'||caracter=='e'||caracter=='i'||caracter=='o'||caracter=='u'){
                array[i]=caracter;
                i++;
            }
        }
        cout<<"Los codigos ASCII de las vocales son:"<<endl;
        for(i=0;i<contador;i++){
            cout<<array[1]<<endl;
        }
        delete[]array;
    }
    return 0;
}