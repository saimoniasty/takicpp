#include <iostream>
using namespace std;

int main(){
    int n,min;
    cout<<"Ile liczb calkowitych chesz wczytac do tabeli: "; cin>>n;
    int liczba[n];
    for(int i=0;i<n;i++){
        cout<<"Podaj liczbe calkowita: "; cin>>liczba[i];
    }
    min=liczba[0];
    for(int i=0;i<n;i++){
        if(min>liczba[i]) min=liczba[i];
    }
    cout<<"Najmniejsza liczba w tabeli: "<<min;

    return 0;
}