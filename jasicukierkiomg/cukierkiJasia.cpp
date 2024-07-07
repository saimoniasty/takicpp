#include <iostream>
using namespace std;

int main(){
    int osoby,cukierki,reszta,cuksJedenUczen;
    cout<<"Podaj liczbe osob w klasie Jasia: "; cin>>osoby;
    cout<<"Podaj liczbe cukierkow: "; cin>>cukierki;
    cuksJedenUczen=cukierki/(osoby-1);
    reszta=cukierki%(osoby-1);
    cout<<"Na jednego ucznia przypadlo "<<cuksJedenUczen<<" cukierkow\n";
    cout<<"Zostalo mu "<<reszta;
    return 0;
}