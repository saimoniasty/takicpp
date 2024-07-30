#include <iostream>
using namespace std;

string pierwsza(int l){
    if(l<2) return "NIE";
    for(int i=2;i*i<=l;i++){
        if(l%i==0) return "NIE";
    }
    return "TAK";
}

int main(){
    int n,liczba;

    cin>>n;
    for(int i=0;i<n;i++){
        cin>>liczba;
        cout<<pierwsza(liczba)<<endl;
    }

    return 0;
}