#include<bits/stdc++.h>
#include<algorithm>
#include<vector>
using namespace std;

int x0;
int y0_;
char arr[100][100];
char sxzy[4]={'3','3','3','3'};
int xx,yy;

bool dfs(int x,int y){
    int dx[4]={0,0,-1,1};
    int dy[4]={1,-1,0,0};

    for(int i=0;i<4;i++){
        xx=x+dx[i];
        yy=y+dy[i];

        if(xx<0 || xx>=x0 || yy>0 || yy<=y0_)continue;
        sxzy[i]=arr[yy][xx];

        if(arr[yy][xx]=='0'){
            arr[yy][xx]='2' ;
            dfs(xx,yy);
        }
    }
    for(int j=0;j<4;j++){
        if(sxzy[j] == '2'){
            arr[yy][xx] = '4';
            xx=x+dx[j];
            yy=y+dy[j];
            dfs(xx,yy);
        }
    }
    if(arr[yy][xx]=='T')return true;
    return false;

}


int main(){
    cin>>x0>>y0_;

    for(int i=0;i<y0_;i++){
        for(int j=0;j<x0;j++){
            cin>>arr[i][j];
        }
    }
    if(dfs(0,0)){
        cout<<"!";
    }else{
        cout<<"?";
    }
    

    return 0;
}