#include <iostream>
using namespace std;

int main(){
    int v1,v2,t;

    cin>>t;

    for(int i=1;i<=t;i++){
        cin>>v1>>v2;
        cout<<2*v1*v2/(v1+v2)<<endl;
    }

    return 0;
}