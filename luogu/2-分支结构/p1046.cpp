#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[10];

    for(int i=0;i<10;i++)cin>>arr[i];

    int tall;
    cin>>tall;
    tall+=30;

    int count=0;
    for(int i=0;i<10;i++){
        if(arr[i]<=tall)count++;
    }

    cout<<count;

    return 0;
}