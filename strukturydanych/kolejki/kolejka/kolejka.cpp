#include <iostream>
#include <queue>
using namespace std;

int main(){

    queue <int> kolejka;
    kolejka.push(23);
    kolejka.push(4);
    kolejka.push(74);
    kolejka.push(213);
    for(int i=0;i<kolejka.size();i++){
        cout<<kolejka.front()<<" ";
        kolejka.pop();
    }

    return 0;
}