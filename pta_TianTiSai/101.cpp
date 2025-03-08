#include<bits/stdc++.h>
#include<algorithm>
#include<string>
#include<vector>
using namespace std;


//写一半不会了,头大

int main(){
    vector<int> vec;
    //输入违禁词数量
    int N;
    cin>>N;
    //输入违禁词
    string W_words[5];
    for(int i=0;i<5;i++){
        cin>>W_words[i];
    }
    //输入阈值
    int k;
    cin>>k;
    //输入句子
    string centens;
    cin>>centens;

    //判断
    int c_size = centens.size();
    
    for(int j=0;j<N;j++){
        int flag=0;
        for(int i=0;i<c_size;i++){
            if(flag==1){
                int size_w=W_words[j].size();
                for(int i2=1;i2<size_w;i2++){
                    if(centens[i]==W_words[j][i2])flag=1;
                    else flag=0;
                }
            }
            if(centens[i]==W_words[j][0]){
                flag = 1;
                vec.push_back(i);
            }
        }
    }

    return 0;
}