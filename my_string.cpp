#include<bits/stdc++.h>
#include<string>
#include<algorithm>

using namespace std;

int main(){
    string s = "1314";
    cout<<"初始= "<<s<<endl;
    //头添加+指定位置添加char或者string
    s.insert(0,"@!");
    cout<<"添加@!= "<<s<<endl;
    //尾插入
    s += ".520";
    cout<<"尾添加.520= "<<s<<endl;
    //尾添加,只能是char
    s.push_back('$');
    cout<<"尾添加$= "<<s<<endl;
    //移除尾
    s.pop_back();
    cout<<"尾移除= "<<s<<endl;
    //移除指定位置
    s.erase(0,2);
    cout<<"头俩移除= "<<s<<endl;
    //获取大小
    cout<<s<<"的大小= "<<s.size()<<endl;
    //转换类型
    cout<<"转换成i--> "<<stoi(s)<<endl;
    cout<<"转换成f--> "<<stof(s)<<endl;
    cout<<"转换成d--> "<<stod(s)<<endl;




    return 0;
}