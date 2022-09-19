# include <iostream>
using namespace std;

int main(){
    int n,m;
    int a[10]={}; // 이거 맞나..?

    cin >> n >> m;
    
    for(int i=0;i<m;i++){
        a[i]=i+1;       //m보다 작은 수 전부 넣음
    }

    for(int i=0;i<m;i++){
        for(int k=0;k<n;k++){
            if(k+1!=a[k]){
            }
        }
        cout<<"\n";
    }
    
    return 0;
}