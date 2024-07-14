#include <iostream>
using namespace std;

int pierwiastek(int n,int a,int r1,int r2){
    int i=0;
    while(a<=n){
        a+=r1;
        r1+=r2;
        i++;
    }
    i--;
    return i;
}

int main(){
    int n;
    cout<<"Podaj z jakiej liczby chcesz obliczyc pierwiastek: "; cin>>n;
    int a=0, r1=1, r2=2;
    cout<<"Pierwiastek z "<<n<<" jest rowny okolo "<< pierwiastek(n,a,r1,r2);

    return 0;
}