#include <iostream>
using namespace std;

int main(){
    int bakteria=1,godzina=0;
    do{
        bakteria*=2;
        godzina+=1;
        cout<<"Ilosc bakteri: "<<bakteria;
        cout<<" godzina: "<<godzina<<endl;
    }while(bakteria<=1000000000);

    return 0;
}