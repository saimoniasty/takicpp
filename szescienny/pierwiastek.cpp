#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int x;
    cout<<"x = "; cin>>x;
    cout<<"Pierwiastek szescienny z "<<x<<" :\n";
    cout<<pow(x,1/3.0);
    return 0;
}