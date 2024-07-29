#include <iostream>
using namespace std;

long long potega(int p,int w){
    if(w==0) return 1;
    else return p*potega(p,w-1);
}

int main(){
    int potegowana,wykladnik;
    cout<<"Podaj liczbe ktora chcesz spotegowac: "; cin>>potegowana;
    cout<<"Podaj do jakiego wykladnika: "; cin>>wykladnik;
    cout<<"Wynik: "<<potega(potegowana,wykladnik);

    return 0;
}