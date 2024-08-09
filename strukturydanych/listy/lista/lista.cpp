#include <iostream>
#include <list>
using namespace std;

int main(){

    list <int> lista;
    lista.push_front(42);
    lista.push_front(54);
    lista.push_front(78);
    lista.push_back(123);
    lista.push_back(42);
    
    return 0;
}