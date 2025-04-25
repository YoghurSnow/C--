#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[3];

    cin>>arr[0]>>arr[1]>>arr[2];
    sort(arr,arr+3);

    int a,b,c;
    a=arr[0];
    b=arr[1];
    c=arr[2];
    string flag;

    if(a+b>c && c-a<b){
        if(a*a+b*b==c*c)flag+="1";
        if(a*a+b*b>c*c)flag+="2";
        if(a*a+b*b<c*c)flag+="3";
        if(a==b ||b==c)flag+="4";
        if(a==b && b==c)flag+="5";

    }else cout<<"Not triangle";

    int len=flag.size();

    for(int i=0;i<len;i++){
        if(flag[i]=='1')cout<<"Right triangle";
        else if(flag[i]=='2')cout<<"Acute triangle";
        else if(flag[i]=='3')cout<<"Obtuse triangle";
        else if(flag[i]=='4')cout<<"Isosceles triangle";
        else if(flag[i]=='5')cout<<"Equilateral triangle";
        
        if(i<len-1)cout<<endl;
    }

    return 0;
}