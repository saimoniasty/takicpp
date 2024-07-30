#include <iostream>
#include <string>
using namespace std;

int silnia(int l){
    if(l==0) return 1;
    else return l*silnia(l-1);
}

int main(){
    int n,liczba,liczba_po_silni;

    cin>>n;

    for(int i=0;i<n;i++){
        cin>>liczba;
        liczba_po_silni=silnia(liczba);
        string l=to_string(liczba_po_silni);
        if(l.length()==1) cout<<0<<" "<<l[0]<<endl;
        else cout<<l[0]<<" "<<l[1]<<endl;
    }

    return 0;
}