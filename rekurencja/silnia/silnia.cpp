#include <iostream>
using namespace std;

int silnia(int l){
    if(l==0) return 1;
    else return l*silnia(l-1);
}

int main(){
    int liczba;
    cout<<"Z jakiej liczby chcesz obliczyc silnie: "; cin>>liczba;
    cout<<"Wynik: "<<silnia(liczba);

    return 0;
}