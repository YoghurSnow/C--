#include<bits/stdc++.h>
#include<algorithm>
#include<vector>
using namespace std;

int main(){
    int n;
    cin>>n;

    int month[10];
    for(int i=0;i<n;i++){
        cin>>month[i];
    }
    for(int i=0;i<n;i++){
        if(month[i]>2 && month[i]<6){
            cout<<"Spring"<<endl;
        }
        else if(month[i]>5 && month[i]<9){
            cout<<"Summer"<<endl;
        }else if(month[i]>8 && month[i]<12){
            cout<<"Autumn"<<endl;
        }else{
            cout<<"Winter"<<endl;
        }
    }

    return 0;
}