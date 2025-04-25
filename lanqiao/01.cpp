#include<bits/stdc++.h>
using namespace std;

int main(){
	string s="ANQNANBNQNANQNQNBNINQNQNANQNINANQNANBNQNANQNQNBNBNQNQNANQNINANQNANBNQNANQNQNBNINQNQNANQNINBNQNANBNQN";
	
	string ex="000";
	int max=0;
	int len=s.size();
	
	for(int i=1;i<=10;i++){
        map<string,int> c;
		for(int j=0;j+i<len;j++){
			string str=s.substr(j,i);
			c[str]++;
		}
		
		for(auto& [k,v]:c){
			if(i*v>max){
				max=i*v;
				ex=k;
			}
			if(i*v==max && k<ex)ex=k;
		}
	}
	
	cout<<ex;
	
	return 0;
}