#include <iostream>
using namespace std;

long long ile;

int main(){
    cout<<"Ile liczb w tablicy: "; cin>>ile;

    long long *tablica;
    tablica=new long long[ile];

    for(int i=0;i<ile;i++){
        cout<<(long long)tablica<<endl;
        tablica++;
    }

    delete [] tablica;

    return 0;
}