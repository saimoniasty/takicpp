#include <iostream>
#include <fstream>
#include <cstdlib>
using namespace std;

int main(){
    int n=1000,nr_liczby=0,parzysta=0,cyfry9=0,dlugosc2__10=0;
    int binarne[n];
    string binarne2[n];
    string linia;

    fstream plikwejscia;
    plikwejscia.open("2011.txt",ios::in);

    if(plikwejscia.good()==false){
        cout<<"Plik nieznaleziony";
        exit(0);
    }

    while(getline(plikwejscia,linia)){
        binarne[nr_liczby]=atoi(linia.c_str());
        binarne2[nr_liczby]=linia;
        nr_liczby++;
    }

    plikwejscia.close();

    for(int i=0;i<n;i++){
        if(binarne[i]%2==0) parzysta++;

        if(binarne2[i].size()==9) cyfry9++;

        if(binarne2[i].size()>=2 && binarne2[i].size()<=10) dlugosc2__10++;
    }

    fstream plikwynik;
    plikwynik.open("wyniki2011.txt",ios::out);

    plikwynik<<"1. Liczb parzystych jest: "<<parzysta<<endl;
    plikwynik<<"2. Liczby ktore maja 9 cyfr: "<<cyfry9<<endl;
    plikwynik<<"3. Liczby ktore maja dlugosc od 2 do 10: "<<dlugosc2__10;

    plikwynik.close();

    return 0;
}