#include<bits/stdc++.h>
using namespace std;

int main(){
    int a,b,sum=0;

    int arr[7],sort_arr[7];
    for(int i=0;i<7;i++){
        cin>>a>>b;
        sum=a+b;
        if(sum<=8)sum=0;
        arr[i]=sum;
        sort_arr[i]=sum;
    }
    
    sort(sort_arr,sort_arr+7);
    int max=sort_arr[6];

    if(max==0)cout<<0;
    else{
        for(int i=0;i<7;i++){
            if(arr[i]==max){
                cout<<i+1;
                break;
            }
        }
    }
    
    return 0;
}