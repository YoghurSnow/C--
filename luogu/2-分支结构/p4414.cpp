#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[3];
    cin>>arr[0]>>arr[1]>>arr[2];

    string s;
    cin>>s;

    sort(arr,arr+3);

    map<char,int> final;

    final['A']=arr[0];
    final['B']=arr[1];
    final['C']=arr[2];

    for(int i=0;i<3;i++){
        cout<<final[s[i]];
        if(i<2)cout<<" ";
    }

    return 0;
}