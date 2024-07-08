#include <iostream>
using namespace std;

int main(){
    int n,max,ilemax=0;
    cout<<"Ile liczb calkowitych chesz wczytac do tabeli: "; cin>>n;
    int liczba[n];
    for(int i=0;i<n;i++){
        cout<<"Podaj liczbe calkowita: "; cin>>liczba[i];
    }
    max=liczba[0];
    for(int i=0;i<n;i++){
        if(max<liczba[i]){ 
            max=liczba[i];
            ilemax=0;
        }
        if(max==liczba[i]) ilemax++;
    }
    cout<<"Najwieksza liczba wystapila "<<ilemax<<" razy w tej tablicy";

    return 0;
}