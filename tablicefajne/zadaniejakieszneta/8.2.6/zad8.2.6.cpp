#include <iostream>
using namespace std;

int main(){
    int n,min,min2;
    cout<<"Ile liczb calkowitych chesz wczytac do tabeli: "; cin>>n;
    int liczba[n];
    for(int i=0;i<n;i++){
        cout<<"Podaj liczbe calkowita: "; cin>>liczba[i];
    }
    min=liczba[0]; min2=liczba[0];
    for(int i=0;i<n;i++){
        if(min>liczba[i]) min=liczba[i];
    }
    if(min==liczba[0]) min2=liczba[1];
    for(int i=0;i<n;i++){
        if(min<liczba[i] && min2>liczba[i]) min2=liczba[i];
    }
    cout<<min2;

    return 0;
}