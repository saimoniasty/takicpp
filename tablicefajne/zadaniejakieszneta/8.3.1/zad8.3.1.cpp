#include <iostream>
using namespace std;

int main(){
    float liczba[5];
    for(int i=0;i<5;i++){
        cout<<"Podaj liczbe rzeczywista: "; cin>>liczba[i];
    }
    for(int i=0;i<5;i++){
        liczba[i]*=liczba[i];
    }
    for(int i=0;i<5;i++){
        cout<<i+1<<". - "<<liczba[i]<<endl;
    }

    return 0;
}