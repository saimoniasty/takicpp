#include <iostream>
using namespace std;


int main(){
    int t;
    cin>>t;
    int a,b;
    for(int i=0;i<t;i++){
        cin>>a; cin>>b;
        while(true){
            if(a==b){
                cout<<a+b<<endl;
                break;
            }
            else if(a<b)  b-=a;
            else if(b<a)  a-=b;
        }
    }

    return 0;
}