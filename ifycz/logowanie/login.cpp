#include <iostream>
using namespace std;

int main(){
    string login,haslo;
    cout<<"Witaj na stronie!"<<endl;
    cout<<"Zaloguj się"<<endl;
    cout<<"Podaj swoj login: "; cin>>login;
    cout<<"Podaj swoje haslo: "; cin>>haslo;
    if((login=="admin") && (haslo=="szarlotka")){
        cout<<"Zalogowano!";
    }
    else if((login!="admin")&&(haslo!="szarlotka")){
        cout<<"Niepoprawny login i haslo";
    }
    else{
        cout<<"Niepoprawny login lub haslo";
    }

    return 0;
}