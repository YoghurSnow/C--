#include<bits/stdc++.h>
#include<cmath> // 包含cmath头文件
using namespace std;

int main(){
    // 计算表达式 (1/3) * (log2(1/3)) + 2 * (2/3) * (log2(2/3))
    double term1 = (1.0 / 3.0) * log2(1.0 / 3.0);
    double term2 = 2 * (2.0 / 3.0) * log2(2.0 / 3.0);
    double result = term1 + term2;

    cout << "(1/3) * (log2(1/3)) + 2 * (2/3) * (log2(2/3)) = " << result << endl;

    return 0;
}


