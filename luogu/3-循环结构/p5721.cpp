#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    int cc=1;
    for(int i=n;i>0;i--){
        for(int j=1;j<=i;j++){
            if(cc<10)cout<<0;
            cout<<cc;
            cc++;
        }
        cout<<endl;
    }

    return 0;
}