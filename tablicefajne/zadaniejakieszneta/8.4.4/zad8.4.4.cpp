#include <iostream>
using namespace std;

int main(){
    float liczba[6];
    cout<<"Podaj 6 liczb rzeczywistych"<<endl;
    for(int i=0;i<6;i++){
        cout<<"Podaj liczbe rzeczywista: "; cin>>liczba[i];
    }
    for(int i=0;i<6;i++){
        cout<<liczba[i]<<"  ";
    }
    cout<<"\nZ zakresu 4-15: "<<endl;
    for(int i=0;i<6;i++){
        if(liczba[i]>=4 && liczba[i]<15) cout<<liczba[i]<<"  ";
    }

    return 0;
}