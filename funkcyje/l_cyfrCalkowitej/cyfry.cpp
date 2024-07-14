#include <iostream>
#include <math.h>
#include <string>
using namespace std;

int ile_cyfr(string a){
    for(int i=1;;i++){
        if(a.length()==i) return i;
    }
}

int main(){
    string a;
    cout<<"Sprawdz ile cyfr ma liczba"<<endl;
    cout<<"Podaj liczbe calkowita: "; cin>>a;
    
    cout<<"Liczba ma "<<ile_cyfr(a)<<" cyfr";

    return 0;
}