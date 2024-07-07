#include <iostream>
using namespace std;

int main(){
    string imie;
    int x;
    cout<<"Podaj swoje imie: "; cin>>imie;
    cout<<"Podaj dodatnia liczbe calkowita: "; cin>>x;
    for(int i=1;i<=x;i++){
        cout<<i<<". "<<imie<<endl;
    }

    return 0;
}