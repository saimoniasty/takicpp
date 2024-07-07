#include <iostream>
using namespace std;

int main(){
    int bakteria=1,godzina=0;
    while(bakteria<=1000000000){
        bakteria*=2;
        godzina+=1;
        cout<<"Ilosc bakteri: "<<bakteria;
        cout<<" godzina: "<<godzina<<endl;
    }

    return 0;
}