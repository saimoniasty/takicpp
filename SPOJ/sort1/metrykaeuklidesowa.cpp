#include <iostream>
#include <math.h>
using namespace std;

int main(){
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        string nazwa[n];
        int x[n],y[n];
        float odleglosc[n];
        for(int i=0;i<n;i++){
            cin>>nazwa[i];
            cin>>x[i];
            cin>>y[i];
            odleglosc[i]=sqrt(pow(x[i],2)+pow(y[i],2));
        }
        cout<<endl;
        for(int i=0;i<n;i++){
            for(int j=n-1;j>=1;j--){
                if(odleglosc[j-1]>odleglosc[j]){
                    float bufor; string bufor_string; int bufor_x,bufor_y;
                    //sortowanie odleglosci
                    bufor=odleglosc[j-1];
                    odleglosc[j-1]=odleglosc[j];
                    odleglosc[j]=bufor;
                    //sortowanie nazw
                    bufor_string=nazwa[j-1];
                    nazwa[j-1]=nazwa[j];
                    nazwa[j]=bufor_string;
                    //sortowanie x i y
                    bufor_x=x[j-1];
                    x[j-1]=x[j];
                    x[j]=bufor_x;

                    bufor_y=y[j-1];
                    y[j-1]=y[j];
                    y[j]=bufor_y;
                }
            }
        }
        for(int i=0;i<n;i++){
            cout<<nazwa[i]<<" "<<x[i]<<" "<<y[i]<<endl;
        }
    }

    return 0;
}