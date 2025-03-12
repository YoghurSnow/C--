#include<bits/stdc++.h>
#include<algorithm>
#include<vector>
using namespace std;

int main(){
   int n;
   cin>>n;
   int num[100];
   int sum=0;
   for(int i=0;i<n;i++){
        cin>>num[i];
        if(num[i]>=-10 && num[i]<=10)sum+=num[i];
   }
   cout<<sum;

    return 0;
}