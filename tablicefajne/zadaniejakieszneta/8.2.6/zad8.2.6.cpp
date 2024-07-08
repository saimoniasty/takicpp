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
    for(int i=0;i<n;i++){
        if(liczba[0]==min) min2=liczba[i+1];
        if(liczba[i]==min) continue;
        if(min2>min && min2>liczba[i]) min2=liczba[i];
    }
    cout<<min<<endl;
    cout<<min2;

    return 0;
}