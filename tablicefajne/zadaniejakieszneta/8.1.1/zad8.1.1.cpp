#include <iostream>
using namespace std;

int main(){
    int liczba[10];
    for(int i=0;i<10;i++){
        cout<<"Podaj "<<i+1<<" liczbe calkowita: ";cin>>liczba[i];
    }
    for(int i=0;i<10;i++){
        cout<<i+1<<". "<<liczba[i]<<endl;
    }

    return 0;
}