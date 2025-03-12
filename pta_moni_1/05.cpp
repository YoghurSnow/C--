#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=n+1-i;j>0;j--){
            cout<<" ";
        }
        for(int k=2*i-1;k>0;k--){
            cout<<"*";
        }
        for(int j=n+1-i;j>0;j--){
            cout<<" ";
        }
        cout<<endl;
    }
    for(int i=2*n+1;i>0;i--){
        cout<<"*";
    }
    cout<<endl;
    for(int i=n;i>0;i--){
        for(int j=1;j<=n+1-i;j++){
            cout<<" ";
        }
        for(int k=2*i-1;k>0;k--){
            cout<<"*";
        }
        for(int j=1;j<=n+1-i;j++){
            cout<<" ";
        }
        cout<<endl;
    }


    return 0;
}