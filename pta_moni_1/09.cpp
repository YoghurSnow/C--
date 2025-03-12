#include<bits/stdc++.h>
#include<algorithm>
#include<vector>
using namespace std;

int xn,yn;
char arr[100][100];

/*void dsp(int x,int y){
    while(1){
        //右
        x++;
        if(arr[x][y]!='0' || x>xn)x--;
        //xia
        y--;
        if(arr[x][y]!='0' || y<yn)y++;
        //zuo
        x--;
        if(arr[x][y]!='0' || x<0)x++;
        //shang
        y++;
        if(arr[x][y]!='0' || y>0)y--;
        
        if(arr[x][y]=='T')break;
    }
}*/

int main(){
   cin>>xn>>yn;

   for(int i=0;i<yn;i++){
        for(int j=0;j<xn;j++){
            cin>>arr[i][j];
        }
   }
   cout<<"My God!";
   //int x0=0,y0=0;
   //dsp(x0,y0);
   //上
   
 
   //下
   //左
   //右

    return 0;
}