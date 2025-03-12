#include<bits/stdc++.h>
#include<algorithm>
#include<vector>
using namespace std;

int main(){
    string str_1;
    string str_2;
    getline(cin,str_1);
    //A-Z=65-90
    //a-z=97-122
    for(int i=0;i<str_1.size();i++){
        if((str_1[i]>=65 && str_1[i]<=90) || 
        (str_1[i]>=97 && str_1[i]<=122)){
            str_2+=char(str_1[i]+1);
        }else{
            str_2+=char(str_1[i]);
        }
    }

    cout<<str_2;

    return 0;
}