#include<bits/stdc++.h>
#include<algorithm>
#include<vector>
using namespace std;

int main(){
   int n;
   cin>>n;
   int num[1000];
   
   vector<int> num_2;//
   
   for(int i=0;i<n;i++){
        cin>>num[i];
   }
   for(int i=1;i<n;i++){
        if(i%2==0)continue;
        if(num[i]>num[i-1]){
            
            num_2.push_back(num[i-1]);
        }else{
            
            num_2.push_back(num[i]);
        }
   }
   sort(num_2.begin(),num_2.end());
   for(int numm:num_2)cout<<numm<<" ";
   cout<<endl<<num_2[n/2-1];

    return 0;
}