#include <iostream>
using namespace std;

int main(){
    int n,max,max2;
    cout<<"Ile liczb calkowitych chesz wczytac do tabeli: "; cin>>n;
    int liczba[n];
    for(int i=0;i<n;i++){
        cout<<"Podaj liczbe calkowita: "; cin>>liczba[i];
    }
    max=liczba[0]; max2=liczba[0];
    for(int i=0;i<n;i++){
        if(max<liczba[i]) max=liczba[i];
    }
    if(max==liczba[0]) max2=liczba[1];
    for(int i=0;i<n;i++){
        if(liczba[i]<max && max2<liczba[i]) max2=liczba[i];
    }
    cout<<max2<<endl;
    return 0;
}