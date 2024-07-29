#include <iostream>
using namespace std;

int main(){
    int t,ile_gosci,ile_ciastek,czas_zjedzenia,ilosc_zjedzonych=0;

    cin>>t;

    for(int i=1;i<=t;i++){
        cin>>ile_gosci>>ile_ciastek;
        for(int i=1;i<=ile_gosci;i++){
            cin>>czas_zjedzenia;
            ilosc_zjedzonych+=86400/czas_zjedzenia;
        }
        if(ilosc_zjedzonych%ile_ciastek==0){
            cout<<ilosc_zjedzonych/ile_ciastek<<endl;
        }
        else{
            cout<<(ilosc_zjedzonych/ile_ciastek)+1<<endl;
        }
        ilosc_zjedzonych=0;
    }

    return 0;
}