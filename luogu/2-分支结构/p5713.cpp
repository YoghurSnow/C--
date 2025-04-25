#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    int local,luogu;
    local=5*n;
    luogu=3*n+11;

    if(local>luogu)cout<<"Luogu";
    else cout<<"Local";


    return 0;
}