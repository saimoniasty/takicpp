#include <iostream>
#include <stdio.h>
#include <conio.h>
using namespace std;

int main(){
    float a,b;
    char wybor;
    for(;;){
        cout<<"Podaj wartosc a: "; cin>>a;
        cout<<"Podaj wartosc b: "; cin>>b;

        cout<<"    MENU GLOWNE    "<<endl;
        cout<<"--------------------"<<endl;
        cout<<"Wybierz jedna opcje: "<<endl;
        cout<<"1. Dodawanie"<<endl;
        cout<<"2. Odejmowanie"<<endl;
        cout<<"3. Mnozenie"<<endl;
        cout<<"4. Dzielenie"<<endl;
        cout<<"5. Koniec programu"<<endl;
        wybor=getch();

        switch(wybor){
            case '1':
                cout<<"Suma = "<<a+b;
            break;

            case '2':
                cout<<"Roznica = "<<a-b;
            break;

            case '3':
                cout<<"Iloczyn = "<<a*b;
            break;

            case '4':
                if(b==0) cout<<"Nie dzieli sie przez zero";
                else cout<<"Iloraz = "<<a/b;
            break;

            case '5':
                exit(0);
            break;

            default: cout<<"Nie ma takiej opcji w menu";
        }
        getchar();getchar();
    }
    return 0;
}