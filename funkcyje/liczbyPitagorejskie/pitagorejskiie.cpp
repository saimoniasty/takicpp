#include <iostream>
#include <math.h>
using namespace std;

bool liczby_pitagorejskie(int a,int b,int c){
    if(pow(a,2)+pow(b,2)==pow(c,2)) return 1;
    else return 0;
}

int main(){
    cout<<"Sprawdz czy trzy liczby sa liczbami pitagorejskimi"<<endl;
    int a,b,c;
    cout<<"Podaj a: "; cin>>a;
    cout<<"Podaj b: "; cin>>b;
    cout<<"Podaj c: "; cin>>c;

    if(liczby_pitagorejskie(a,b,c)) cout<<"Sa to liczby pitagorejskie";
    else cout<<"Nie sa to liczby pitagorejskie";

    return 0;
}