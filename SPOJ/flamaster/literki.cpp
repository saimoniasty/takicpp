#include <iostream>
using namespace std;

void skrocone_wyrazy(int n){
    string wyraz;
    for(int i=0;i<n;i++){
        cin>>wyraz;
        int dlugosc=wyraz.size();
        int ile=1;
        for(int j=1;j<=dlugosc;j++){
            if(wyraz[j]==wyraz[j-1]) ile++;
            else{
                if(ile>2) cout<<wyraz[j-1]<<ile;
                else if(ile==2) cout<<wyraz[j-1]<<wyraz[j-1];
                else cout<<wyraz[j-1];
                ile=1;
            }
        }
        cout<<endl;
    }
}

int main(){
    int n; cin>>n;
    
    skrocone_wyrazy(n);

    return 0;
}