#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    long double fib[100000];
    int n;
    cout<<"Ile liczb fibonacciego chcesz wyznaczyc: "; cin>>n;
    fib[0]=1; fib[1]=1;
    cout<<setprecision(10000);
    //cout<<fib[0]; cout<<", "<<fib[1];
    for(int i=2;i<n;i++){
        fib[i]=fib[i-1]+fib[i-2];
        //cout<<", "<<fib[i];
    }
    //cout<<fib[n-1];
    cout<<"Zlota liczba: "<<fib[n-1]/fib[n-2];

    return 0;
}