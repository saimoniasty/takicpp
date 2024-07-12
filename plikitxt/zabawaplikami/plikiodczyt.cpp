#include <iostream>
#include <fstream>
#include <cstdlib>
using namespace std;

int main(){
    string imie,nazwisko,linia;
    int nr_tel,nr_lini=1;

    fstream plik;
    plik.open("wizytowka.txt",ios::in);

    if(plik.good()==false){
        cout<<"Plik nie istnieje";
        exit(0);
    }
    while(getline(plik,linia)){
        switch(nr_lini){
            case 1: imie=linia; break;
            case 2: nazwisko=linia; break;
            case 3: nr_tel=atoi(linia.c_str()); break;
        }
        nr_lini++;
    }

    plik.close();

    cout<<imie<<endl;
    cout<<nazwisko<<endl;
    cout<<nr_tel;

    return 0;
}