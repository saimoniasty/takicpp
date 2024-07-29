#include <iostream>
using namespace std;

long long fibo(int l){
    if(l==1 || l==2) return 1;
    else return fibo(l-1)+fibo(l-2);
}

int main(){
    int liczba;
    cout<<"Ktora liczbe z kolei z ciagu fibonacciego chcesz wyznaczyc: "; cin>>liczba;
    cout<<"Wynik: "<<fibo(liczba);

    return 0;
}