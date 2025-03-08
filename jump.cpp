#include<bits/stdc++.h>

using namespace std;

int jump(int number){
    if(number==0 || number==1)return 1;
    return jump(number-1)+jump(number-2);
}

int main(){
    cout<<jump(2);

    return 0;
}