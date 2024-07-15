#include <iostream>
#include <math.h>
#include <string>
#include <fstream>
#include <cstdlib>
using namespace std;

bool konczy_pierwiastkiem(string n,int n1){
    float pierwiastek=sqrt(n1);
    if(pierwiastek-int(pierwiastek)==0){
        string pierwiastek1=to_string(pierwiastek);
        string odwrocony_pierwiastek;

        int dlugosc_pierwiastka=pierwiastek1.length(),j=0,dobre=0;

        for(int i=dlugosc_pierwiastka-1;i>=0;i--){
            odwrocony_pierwiastek+=pierwiastek1[i];
        }
        if(n1/2==dlugosc_pierwiastka){
            for(int i=n.length()-1;i>=dlugosc_pierwiastka;i--){
                if(n[i]==odwrocony_pierwiastek[j]) dobre++;
                j++;
            }
        }
        else{
            for(int i=n.length()-1;i>=dlugosc_pierwiastka-1;i--){
                if(n[i]==odwrocony_pierwiastek[j]) dobre++;
                j++;
            }
        }
        if(dobre==dlugosc_pierwiastka) return 1;
        else return 0;
    }
    else return 0;
}
void wypisz_liczby(){
    fstream plik;
    plik.open("liczby10000.txt",ios::out);

    for(int i=1;i<=10000;i++){
        plik<<i<<endl;
    }

    plik.close();
}

int main(){
    string x,linia;
    int a=10000,nr_liczby=0;
    int x1;
    string liczby[a];
    //wypisz_liczby();

    fstream plik;
    plik.open("liczby10000.txt",ios::in);

    if(plik.good()==false){
        cout<<"Nie znaleziono pliku";
        exit(0);
    }
    while(getline(plik,linia)){
        liczby[nr_liczby]=linia;
        nr_liczby++;
    }

    plik.close();

    cout<<"Liczby ktore koncza sie swoim pierwiastkiem z zakresu 1-10000"<<endl;

    for(int i=0;i<a;i++){
        x=liczby[i];
        x1=atoi(x.c_str());

        if(konczy_pierwiastkiem(x,x1)) cout<<i+1<<". - "<<x1<<endl;
    }


    return 0;
}