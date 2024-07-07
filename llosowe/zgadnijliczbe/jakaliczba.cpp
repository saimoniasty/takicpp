#include <iostream>
#include <cstdlib>
#include <time.h>
#include <stdio.h>
using namespace std;

int main(){
    int liczba,zgadnij,i=1;
    cout<<"Pomyslalem liczbe z zakresu 1 do 100"<<endl;
    srand(time(NULL));
    liczba=rand()%100+1;
    cout<<"Sprobuj ja zgadnac: "; cin>>zgadnij;
    while(true){
        if(zgadnij==liczba){
            break;
        }
        if(zgadnij<liczba){
            cout<<"Moja liczba jest wieksza niz "<<zgadnij<<", sprobuj jeszcze raz: "; cin>>zgadnij;
            i+=1;
            continue;
        }
        if(zgadnij>liczba){
            cout<<"Moja liczba jest mniejsza niz "<<zgadnij<<", sprobuj jeszcze raz: "; cin>>zgadnij;
            i+=1;
            continue;
        }
    }
    cout<<"Brawo zgadles liczbe za "<<i<<" razem!";
    getchar();getchar();
    return 0;
}