#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin>>n;

    int day=0;
    while(1){
        if(n==1)break;
        n/=2;
        day++;
    }

    cout<<day+1;

    return 0;
}