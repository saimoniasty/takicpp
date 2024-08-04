#include <iostream>
#include <string>
using namespace std;

bool palindrom(string liczba){
    string l_odwrocona;
    for(int i=liczba.size()-1;i>=0;i--){
        l_odwrocona+=liczba[i];
    }
    if(l_odwrocona==liczba) return 1;
    else return 0;
}

int main(){
    int n,liczba,dodawania=0; cin>>n;

    for(int i=0;i<n;i++){
        cin>>liczba;
        string liczba_wyrazowo=to_string(liczba),liczba_odwrocona;
        while(!palindrom(liczba_wyrazowo)){
            for(int i=liczba_wyrazowo.size()-1;i>=0;i--){
                liczba_odwrocona+=liczba_wyrazowo[i];
                liczba+=atoi(liczba_odwrocona.c_str());
                dodawania++;
            }
        }
        cout<<liczba<<" "<<dodawania<<endl;
        dodawania=0;
    }
    return 0;
}