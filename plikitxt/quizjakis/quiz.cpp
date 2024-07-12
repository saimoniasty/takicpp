#include <iostream>
#include <fstream>
#include <cstdlib>
#include <algorithm>
#include <string>
using namespace std;

int main(){
    string temat,nick,linia,odpowiedz;
    string pytanie[5];
    string odpA[5],odpB[5],odpC[5],odpD[5];
    string poprawne[5];
    int nr_lini=1,nr_pytania=0,punkty=0;

    fstream plik;
    plik.open("quiz.txt",ios::in);

    if(plik.good()==false){
        cout<<"Nie udalo sie otworzyc pliku";
        exit(0);
    }
    while(getline(plik,linia)){
        switch(nr_lini){
            case 1: temat=linia;                break;
            case 2: nick=linia;                 break;
            case 3: pytanie[nr_pytania]=linia;  break;
            case 4: odpA[nr_pytania]=linia;     break;
            case 5: odpB[nr_pytania]=linia;     break;
            case 6: odpC[nr_pytania]=linia;     break;
            case 7: odpD[nr_pytania]=linia;     break;
            case 8: poprawne[nr_pytania]=linia; break;
        }
        if(nr_lini==8){nr_lini=2; nr_pytania++;}
        nr_lini++;
    }

    plik.close();

    cout<<temat<<endl;
    cout<<nick<<endl;

    for(int i=0;i<5;i++){
        
        cout<<pytanie[i]<<endl;
        cout<<"A. "<<odpA[i]<<endl;
        cout<<"B. "<<odpB[i]<<endl;
        cout<<"C. "<<odpC[i]<<endl;
        cout<<"D. "<<odpD[i]<<endl;

        cout<<"Podaj odpowiedz: "; cin>>odpowiedz;

        transform(odpowiedz.begin(), odpowiedz.end(), odpowiedz.begin(), ::tolower);

        if(odpowiedz==poprawne[i]){
            cout<<endl<<"Brawo! Dobra odpowiedz, zdobywasz punkta!"<<endl<<endl;
            punkty++;
        }
        else{
            cout<<endl<<"Zla odpowiedz"<<endl<<endl;
        }
    }
    cout<<"Liczba punktow jakie zdobyles: "<<punkty;

    return 0;
}