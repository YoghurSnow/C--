#include<bits/stdc++.h>
using namespace std;


int main(){
	int n;
	cin>>n;
	
	int arr[1000];
	int k;
	int t=0;
	for(int i=0;i<n;i++){
		cin>>k;
		for(int j=0;j<k;j++){
			cin>>arr[t];t++;
		}
	}
	
	int m;
	cin>>m;
	int brr[10000];
	for(int i=0;i<m;i++){
		cin>>brr[i];
		for(int j=0;j<=t;j++){
			if(brr[i]==arr[j]){
				brr[i]=0;
				break;
			}
		}

	}
	
	for(int i=0;i<m;i++){
		cout<<brr[i]<<" ";
	}cout<<endl;
	
	int flag;
	for(int i=0;i<m;i++){
		if(brr[i]==0)continue;
		flag=0;
		for(int j=0;i<m;j++){
			if(brr[j]==0)continue;
			if(i==j)continue;
			
			if(brr[i]==brr[j])flag=1;
			
		}
		if(flag==0)cout<<brr[i]<<" ";
	}

	
	return 0;
}


