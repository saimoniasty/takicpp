#include <iostream>
using namespace std;

int main(){
    int n,max;
    cout<<"Ile liczb calkowitych chesz wczytac do tabeli: "; cin>>n;
    int liczba[n];
    for(int i=0;i<n;i++){
        cout<<"Podaj liczbe calkowita: "; cin>>liczba[i];
    }
    max=liczba[0];
    for(int i=0;i<n;i++){
        if(max<liczba[i]) max=liczba[i];
    }
    cout<<"Najwieksza liczba w tabeli: "<<max;

    return 0;
}