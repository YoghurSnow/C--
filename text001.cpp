#include<iostream>
#include<algorithm>
#include<string>
#include<vector>

using namespace std;

int main(){
	//1.创建
	vector<int> arr;
	int a;
	//2.添加
	for(int i=0;i<9;i++){
		cin>>a;
		arr.push_back(a);
	}
	//3.输出
	for(int num:arr){
		cout<<num<<" ";
	}
	//4.访问某一个
	cout<<endl<<"arr[2]="<<arr[2]<<endl;
	//5.修改某一个
	arr[3]=44;
	//6.删除某一个
	vector<int>::iterator it = arr.begin();
	it += 5;
	arr.erase(it);
	//3.输出
	for(int num:arr){
		cout<<num<<" ";
	}
//0 1 2 3  4 5 6 7 8
//1 2 3 4  5 6 7 8 9
//1 2 3 44 5 7 8 9




	return 0;
}