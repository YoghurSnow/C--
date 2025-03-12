#include<bits/stdc++.h>
#include<algorithm>
#include<vector>
using namespace std;

int main(){
   int n;
   cin>>n;
   string str[52];
   for(int i=0;i<n;i++){
        cin>>str[i];
   }
   int count =0;
   for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i!=j){
                if(str[i]==str[j]){
                    count++;
                    str[i]='0';
                }
            }
        }
   }

   cout<<52-n+count;

    return 0;
}