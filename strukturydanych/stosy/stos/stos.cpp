#include <iostream>
#include <stack>
using namespace std;

int main(){

    stack <int> stos;
    stos.push(22);
    stos.push(123);
    stos.push(3);
    for(int i=stos.size();i>0;i++){
        if(stos.size()!=0){
            cout<<stos.top()<<" ";
            stos.pop();
        }
        else break;
    }

    return 0;
}