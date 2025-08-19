#include<iostream>
#include <cstring>
using namespace std;
void contarPalabras (char texto[], int mincaracter, int &contCaracteres, int &contPalabras ,int &promCars ,int &palabrasMin ,int &palabrasFaltantes)
{

    for(int i=0; i<strlen(texto); i++)
    {
        if(texto[i]==' '){
         contPalabras++;
        }
        else{
            contCaracteres++;
        }
    }
    promCars=contCaracteres/contPalabras;
    cout<<promCars<<""<<endl;
    palabrasMin= mincaracter/promCars;
    cout<<palabrasMin<<""<<endl;
    if(contCaracteres<mincaracter){
        palabrasFaltantes=palabrasMin-contPalabras;
    }
}
void suma()
{

}
int main()
{ int contCaracteres=0, contPalabras=0, promCars,palabrasMin,palabrasFaltantes, minCaracteres=10000;
    char texto[minCaracteres];
    cin.getline(texto,minCaracteres);
    contarPalabras(texto, minCaracteres, contCaracteres,contPalabras, promCars, palabrasMin, palabrasFaltantes);
}
