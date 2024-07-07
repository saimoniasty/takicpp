#include <iostream>
using namespace std;

int main(){
    string PIN;
    cout<<"Witaj w banku"<<endl;
    cout<<"Podaj swój PIN: "; cin>>PIN;
    if(PIN=="1729"){
        cout<<"PIN jest poprawny"<<endl;
    }
    else{
        cout<<"Niepoprawny PIN"<<endl;
    }

    return 0;
}