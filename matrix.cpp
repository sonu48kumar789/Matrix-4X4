#include<iostream>
using namespace std;
int main(){
    int a[4][4],b[4][4],c[4][4],d[4][4];
    for(int m=0;m<4;m++){
        for(int t=0;t<4;t++){
            cout<<"a"<<m+1<<t+1<<" = ";
            cin>>a[m][t];
        }
    }
    for(int m=0;m<4;m++){
        for(int t=0;t<4;t++){
            cout<<"b"<<m+1<<t+1<<" = ";
            cin>>b[m][t];
        }
    }
    for(int m=0;m<4;m++){
        for(int t=0;t<4;t++){
            c[m][t] = a[m][0]*b[0][t] + a[m][1]*b[1][t] + a[m][2]*b[2][t]+ a[m][3]*b[3][t];
        }
    }
    for(int m=0;m<4;m++){
        for(int t=0;t<4;t++){
            cout<<c[m][t]<<"\t";
        }
        cout<<endl;
    }
}
