#include <iostream>
#include <math.h>
using namespace std;

void sortowanie_babelkowe(float *tab,int n){
    for(int i=1;i<n;i++){
        for(int j=n-1;j>=1;j--){
            if(tab[j]<tab[j-1]){
                int bufor; bufor=tab[j-1];
                tab[j-1]=tab[j];
                tab[j]=bufor;
            }
        }
    }
}

int main(){
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        string nazwa[n];
        int x[n],y[n];
        float *odleglosc;
        odleglosc=new float [n];
        for(int i=0;i<n;i++){
            cin>>nazwa[i];
            cin>>x[i];
            cin>>y[i];
            odleglosc[i]=sqrt(pow(x[i],2)+pow(y[i],2));
        }
        cout<<endl;
        sortowanie_babelkowe(odleglosc,n-1);
        for(int j=0;j<n;j++){
            cout<<odleglosc[j]<<endl;
        }
        cout<<endl;

        delete [] odleglosc;
    }

    return 0;
}