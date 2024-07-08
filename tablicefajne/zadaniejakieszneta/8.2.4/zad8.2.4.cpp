#include <iostream>
using namespace std;

int main(){
    int n,min,ilemin=0;
    cout<<"Ile liczb calkowitych chesz wczytac do tabeli: "; cin>>n;
    int liczba[n];
    for(int i=0;i<n;i++){
        cout<<"Podaj liczbe calkowita: "; cin>>liczba[i];
    }
    min=liczba[0];
    for(int i=0;i<n;i++){
        if(min>liczba[i]){ 
            min=liczba[i];
            ilemin=0;
        }
        if(min==liczba[i]) ilemin++;
    }
    cout<<"Najmniejsza liczba wystapila "<<ilemin<<" razy w tej tablicy";

    return 0;
}