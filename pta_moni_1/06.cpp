#include<bits/stdc++.h>
#include<algorithm>
#include<vector>
using namespace std;

int main(){
    int n,m,k;
    string x;
    cin>>n>>x>>m>>k;
    if(k==n){
        cout<<"mei you mai "<<x<<" de";
    }else if(k==m){
        cout<<"kan dao le mai "<<x<<" de";
    }else{
        cout<<"wang le zhao mai "<<x<<" de";
    }



    return 0;
}