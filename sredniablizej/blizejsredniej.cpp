#include <iostream>
#include <math.h>
using namespace std;

float srednia(float *tab){
    float suma=0;

    for(int i=0;i<5;i++){
        suma+=*tab;
        tab++;
    }

    return suma/5;
}

void najblizej_sredniej(float *tab,float sred){
    float najblizej=*tab,kolejnaLiczba,najblizejLiczba,najblizej2=0;

    for(int i=0;i<5;i++){
        kolejnaLiczba=sred-*tab;
        najblizejLiczba=sred-najblizej;

        if(kolejnaLiczba<0) kolejnaLiczba*=-1;

        if(najblizejLiczba<0) najblizejLiczba*=-1;

        if(najblizejLiczba==kolejnaLiczba) najblizej2=*tab;

        if(najblizejLiczba>kolejnaLiczba) najblizej=*tab;

        if(najblizejLiczba<0) najblizejLiczba*=-1;
        tab++;
    }

    if(najblizej2==0)   cout<<"Liczba najblizsza sredniej: "<<najblizej;
    else                cout<<"Liczby najblizsze sredniej: "<<najblizej<<", "<<najblizej2;
}

int main(){
    float liczby[5];
    cout<<"Zobacz ktora liczba jest najblizsza twojej sredniej"<<endl;
    cout<<"Podaj 5 liczb (moga byc zmiennoprzecinkowe)"<<endl;

    for(int i=0;i<5;i++){
        cout<<"Podaj liczbe: "; cin>>liczby[i];
    }

    float sredniaa=srednia(liczby);
    cout<<"Srednia: "<<sredniaa<<endl;

    najblizej_sredniej(liczby,sredniaa);

    return 0;
}