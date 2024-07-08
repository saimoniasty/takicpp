#include <iostream>
using namespace std;

int main(){
    int n,j;
    int liczba[30];
    cout<<"Ile liczb calkowitych chesz wczytac z zakresu (1,30): "; cin>>n;
    if(n>=1 && n<=30){
        for(int i=0;i<n;i++){
            cout<<"Podaj "<<i+1<<" liczba calkowita: "; cin>>liczba[i];
        }
        j=1;
        for(int i=0;i<n;i++){
            cout<<j<<". "<<liczba[i]<<endl;
            j++;
        }
    }
    else{
        cout<<"Liczba jest spoza zakresu (1,30)";
    }

    return 0;
}