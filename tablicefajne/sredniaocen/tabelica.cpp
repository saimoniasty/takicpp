#include <iostream>
using namespace std;

int main(){
    int oceny[5];
    float srednia,suma=0;
    for(int i=0;i<5;i++){
        cout<<"Podaj ocene: "; cin>>oceny[i];
        suma+=oceny[i];
    }
    srednia=suma/5;
    cout<<srednia;

    return 0;
}