#include <iostream>
#include <windows.h>
using namespace std;

void quicksort(int *tab,int lewy, int prawy){
    int v=tab[(lewy+prawy)/2];
    int i,j,x;
    i=lewy;
    j=prawy;
    do{
        while(tab[i]<v) i++;
        while(tab[j]>v) j--;
        if(i<=j){
            x=tab[i];
            tab[i]=tab[j];
            tab[j]=x;
            i++; j--;
        }
    }while(i<=j);

    if(j>lewy) quicksort(tab,lewy,j);
    if(i<prawy) quicksort(tab,i,prawy);
}

int main(){
    int ile;
    cout<<"Sortowanie szybkie"<<endl;

    cout<<"Ile losowych liczb w tablicy: "; cin>>ile;

    int *tablica;
    tablica=new int [ile];

    srand(time(NULL));

    cout<<"Przed sortowaniem: "<<endl;

    for(int i=0;i<ile;i++){
        tablica[i]=rand()%100000+1;
        cout<<tablica[i]<<" ";
    }

    quicksort(tablica,0,ile-1);

    cout<<endl<<"Po posortowaniu: "<<endl;

    for(int i=0;i<ile;i++){
        cout<<tablica[i]<<" ";
    }

    delete [] tablica;

    return 0;
}