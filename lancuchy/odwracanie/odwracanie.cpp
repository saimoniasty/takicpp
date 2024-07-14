#include <iostream>
using namespace std;

int main(){
    string slowo,odwrocone;
    cout<<"Podaj slowo ktore chcesz odwrocic: "; cin>>slowo;
    int dlugosc=slowo.length();
    for(int i=dlugosc-1;i>=0;i--){
        odwrocone+=slowo[i];
    }

    cout<<"Twoje odwrocone slowo: "<<odwrocone;

    return 0;
}