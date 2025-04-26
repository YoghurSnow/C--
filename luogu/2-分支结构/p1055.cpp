#include<bits/stdc++.h>
using namespace std;

int main(){
    string ISBN;
    cin>>ISBN;

    int num[9];
    for(int i=0;i<9;i++)num[i]=0;

    int k=0;
    for(int i=0;i<11;i++){
        if(i==1 || i==5)continue;
        num[k]=ISBN[i]-'0';
        k++;
    }

    int key=0;
    for(int i=0;i<9;i++)key+=(num[i]*(i+1));
    key%=11;

    char ch;
    if(key==10)ch='X';
    else ch=key+'0';

    if(ch==ISBN[12])cout<<"Right";
    else {
        ISBN.pop_back();
        cout<<ISBN<<ch;
    }


    return 0;
}

// 0-670-8216 2 - 4
// 0123456789101112