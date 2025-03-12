#include<bits/stdc++.h>
#include<algorithm>
#include<vector>
using namespace std;

int main(){
    string str;
    cin>>str;
    vector<float> score;
    stringstream ss(str);
    string s;

    while(getline(ss,s,',')){
        score.push_back(stof(s));
    }
    
    sort(score.begin(),score.end());

    cout<<score[score.size()-2]<<endl;
    cout<<score[1]<<endl;

    float sum=0;
    for(float sc:score){
        sum+=sc;
    }

    sum-=(score[0]+score[score.size()-1]);
    printf("%.2f",sum/(score.size()-2));
    
    return 0;
}