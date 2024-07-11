#include <iostream>
#include <cstdlib>
using namespace std;

int main(){
    int nr_mies;
    for(;;){
    cout<<"Jaki jest nr miesiaca: "; 
    if(!(cin>>nr_mies)){
        cout<<"To nie jest liczba";
        exit(0);
    }
    switch(nr_mies){
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            cout<<"Ten miesiac ma 31 dni"<<endl;
            cout<<"Jesli chcesz wyjsc kliknij 20"<<endl;
        break;
        case 4:
        case 6:
        case 9:
        case 11:
            cout<<"Ten miesiac ma 30 dni"<<endl;
            cout<<"Jesli chcesz wyjsc kliknij 20"<<endl;
        break;
        case 2:{
            int rok;
            cout<<"Jaki jest rok: "; cin>>rok;
            if(rok%4==0 && rok%100!=0 || rok%400==0){ 
                cout<<"Ten miesiac ma 29 dni"<<endl;
                cout<<"Jesli chcesz wyjsc kliknij 20"<<endl;
            }
            else{ 
                cout<<"Ten miesiac ma 28 dni"<<endl;
                cout<<"Jesli chcesz wyjsc kliknij 20"<<endl;
            }
        }
        break;
        case 20:
            exit(0);
        break;
        default: cout<<"Niepoprawny nr miesiaca"<<endl;
    }
    }

    return 0;
}