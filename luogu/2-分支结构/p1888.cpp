#include<bits/stdc++.h>
using namespace std;

int main(){
    long long arr[3];
    cin>>arr[0]>>arr[1]>>arr[2];

    sort(arr,arr+3);

    for(int i=arr[0];i>0;i--){
        if(arr[2]%i==0 && arr[0]%i==0){
            arr[2]/=i;
            arr[0]/=i;
        }
    }
    cout<<arr[0]<<"/"<<arr[2];

    return 0;
}