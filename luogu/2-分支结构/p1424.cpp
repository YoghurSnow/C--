#include<bits/stdc++.h>
using namespace std;

int main(){
    int x,n;
    cin>>x>>n;

    int arr[8];
    for(int i=0;i<8;i++)arr[i]=0;

    int k=x;
    while(n--){
        arr[k]+=250;
        k++;
        if(k==8)k=1;
    }

    arr[6]=0;
    arr[7]=0;
    int sum=0;
    for(int i=1;i<8;i++){
        sum+=arr[i];
    }

    cout<<sum;

    return 0;
}