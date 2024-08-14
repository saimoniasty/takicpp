#include <iostream>
using namespace std;

char akcja;
int liczba,rozmiar=0;
int stos[11];

void push(){
    cin>>liczba;
    rozmiar++;
    if(rozmiar>10){
        cout<<":("<<endl;
    }
    else{
        stos[rozmiar]=liczba;
        cout<<":)"<<endl;
    }
}

void pop(){
    if(rozmiar<1){
        cout<<":("<<endl;
    }
    else{
        cout<<stos[rozmiar]<<endl;
        rozmiar--;
    }
}

int main(){
    while(cin>>akcja){
        if(akcja=='+'){
            push();
        }
        else if(akcja=='-'){
            pop();
        }
    }

    return 0;
}