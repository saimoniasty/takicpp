#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>
using namespace std;

int main(){
    int nr_liczby=0,n=1000,jedynki=0,zera=0,wiecejzer=0;
    string binarne[n];
    string linia;

    fstream plik;
    plik.open("2015.txt",ios::in);

    if(plik.good()==false){
        cout<<"Nie znaleziono pliku";
        exit(0);
    }
    while(getline(plik,linia)){
        binarne[nr_liczby]=linia;
        nr_liczby++;
    }

    plik.close();
    for(int i=0;i<n;i++){
        for(int j=0;j<binarne[i].size();j++){
            if(binarne[j][j]=='1') jedynki++;
            else zera++;
        }
        if(zera>jedynki) wiecejzer++;
        jedynki=0; zera=0;
    }

    fstream plikwynik;
    plikwynik.open("wyniki2015.txt",ios::out);

    plikwynik<<"Liczby ktore maja wiecej zer niz jedynek: "<<wiecejzer<<endl;

    plikwynik.close();

    return 0;
}