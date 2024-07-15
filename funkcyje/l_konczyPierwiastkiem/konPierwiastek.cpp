#include <iostream>
#include <math.h>
#include <string>
using namespace std;

bool konczy_pierwiastkiem(string n,float n1){
    float pierwiastek=sqrt(n1);

    string pierwiastek1=to_string(pierwiastek);
    string odwrocony_pierwiastek;

    int dlugosc_pierwiastka=pierwiastek1.length(),j=0,dobre=0;

    for(int i=dlugosc_pierwiastka-1;i>=0;i--){
        odwrocony_pierwiastek+=pierwiastek1[i];
    }
    if(n1/2==dlugosc_pierwiastka){
        for(int i=n.length()-1;i>=dlugosc_pierwiastka;i--){
            if(n[i]==odwrocony_pierwiastek[j]) dobre++;
            j++;
        }
    }
    else{
        for(int i=n.length()-1;i>=dlugosc_pierwiastka-1;i--){
            if(n[i]==odwrocony_pierwiastek[j]) dobre++;
            j++;
        }
    }
    if(dobre==dlugosc_pierwiastka) return 1;
    else return 0;
}

int main(){
    string x;
    float x1;
    cout<<"Sprawdz czy liczba konczy sie swoim pierwiastkiem"<<endl;
    cout<<"Podaj x: "; cin>>x;
    x1=atof(x.c_str());

    if(konczy_pierwiastkiem(x,x1)) cout<<"Liczba konczy sie swoim pierwiastkiem";
    else cout<<"Liczba nie konczy sie sowim pierwiastkiem";

    return 0;
}