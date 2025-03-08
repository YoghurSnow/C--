#include<bits/stdc++.h>
#include<vector>
using namespace std;

int main(){
    int N;
    cin>>N;
    cin.ignore();//!!!!!!!
    //输价格!!!!!!!
    string line;
    getline(cin,line);

    istringstream iss(line);
    vector<float> prize;
    string pr;
    while(iss>>pr){
        prize.push_back(stof(pr));
    }
    //输种类和数量
    //vector<int> number(N+1,0);//!!!!!!!
    int number[100];
    int s,n;
    for(int i=1;i<N+1;i++){
        number[i]=0;
    }
    while(1){
        string s_n;
        getline(cin,s_n);
        if(s==0)break;
        s=s_n[0]-'0';
        n=s_n[2]-'0';
        number[s]+=n;
    }
    //算价格和总数
    for(int i=1;i<N+1;i++){
        cout<<number[i]<<endl;
    }
    double sum=0.00;
    for(int i=1;i<N+1;i++){
        //if(number[i]==0)continue;
        sum += prize[i-1]*number[i];
    }
    cout<<fixed<<setprecision(2);
    cout<<sum;
    

    
    return 0;
}