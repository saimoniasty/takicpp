#include <iostream>
#include <cmath>

using namespace std;

int main(){
    float a=3,b=4,c=6;
    float x=(a+b+c)/2;
    cout<<x<<endl;
    float pole=sqrt(x*(x-a)*(x-b)*(x-c));
    cout<<"Pole trojkata z wzoru herona: \n";
    cout<<pole;
    return 0;
}