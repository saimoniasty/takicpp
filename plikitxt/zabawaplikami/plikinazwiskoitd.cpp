#include <iostream>
#include <fstream>
using namespace std;

int main(){
    string imie,nazwisko;
    int nr_tel;
    cout<<"Podaj imie: "; cin>>imie;
    cout<<"Podaj nazwisko: "; cin>>nazwisko;
    cout<<"Podaj nr telefonu: "; cin>>nr_tel;

    fstream plik;
    plik.open("wizytowka.txt",ios::out | ios:: app);

    plik<<imie<<endl;
    plik<<nazwisko<<endl;
    plik<<nr_tel;

    plik.close();

    return 0;
}