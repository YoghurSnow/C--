#include<iostream>
#include<algorithm>
#include<string>

using namespace std;

int main(){
	int sum=0;
	for(int i=1;i<2021;i++){
		string s = to_string(i);
		sum += s.count('2');
	}
	cout<<sum;


	return 0;
}