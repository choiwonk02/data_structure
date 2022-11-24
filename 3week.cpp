#include <iostream>
using namespace std;

int main(){
    int n,m;
    int max=0;
    int a[100]={};
    cin>>n>>m;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    for(int i=0;i<sizeof(a);i++){
        for(int k=0;k<sizeof(a)-1;k++){
            for(int l=0;l<sizeof(a)-2;l++){
                int current;
                current=a[i]+a[k]+a[l];
                if(current<=m){
                    if(current>=max){
                        max=current;
                    }
                }
            }
        }
    }

    cout<<max;
    return 0;
}