#include <iostream>
using namespace std;

int main(){
    int liczba[6];
    for(int i=0;i<6;i++){
        cout<<"Podaj liczbe calkowita: "; cin>>liczba[i];
    }
    for(int i=0;i<6;i++){
        cout<<liczba[i]<<"  ";
    }
    cout<<"\nLiczby parzyste: "<<endl;
    for(int i=0;i<6;i++){
        if(liczba[i]%2==0) cout<<liczba[i]<<"  ";
    }
    cout<<"\nLiczby nieparzyste: "<<endl;
    for(int i=0;i<6;i++){
        if(liczba[i]%2==1) cout<<liczba[i]<<"  ";
    }


    return 0;
}