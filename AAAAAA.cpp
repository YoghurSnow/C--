#include<bits/stdc++.h>
using namespace std;

int main(){
    string str = "14.59";
    float num = stof(str); // 将字符串转换为 float 类型

    // 设置浮点数的输出精度
    cout << fixed << setprecision(2);
    cout << "字符串: " << str << " 转换为 float: " << num << endl;

    return 0;
}