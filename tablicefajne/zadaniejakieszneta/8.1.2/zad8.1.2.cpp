#include <iostream>
using namespace std;

int main(){
    int liczba[10];
    for(int i=0;i<10;i++){
        cout<<"Podaj "<<i+1<<" liczbe calkowita: ";cin>>liczba[i];
    }
    int j=1;
    for(int i=9;i>=0;i--){
        cout<<j<<". "<<liczba[i]<<endl;
        j++;
    }

    return 0;
}