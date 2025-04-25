#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    int sum[3];
    int num,price;

    for(int i=0;i<3;i++){
        cin>>num>>price;
        sum[i]=0;
        if(n%num!=0)sum[i]=(n/num+1)*price;
        else sum[i]=(n/num)*price;
    }
    sort(sum,sum+3);
    cout<<sum[0];


    return 0;
}