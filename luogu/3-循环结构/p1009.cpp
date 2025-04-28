#include<bits/stdc++.h>
using namespace std;

string num,s;
string ss1,ss2="0";

string plusy(string ss1,string ss2){
    string final;
    final.clear();

    int len1=ss1.size();
    int len2=ss2.size();

    int cha;
    if(len1<len2){
        cha=len2-len1;
        while(cha--)ss1.push_back('0');
    }else{
        cha=len1-len2;
        while(cha--)ss2.push_back('0');
    }

    int t=0,c=0;
    int len=ss1.size();

    int a,b;
    for(int i=0;i<len;i++){
        a=ss1[i]-'0';
        b=ss2[i]-'0';

        t=(a+b)%10+c;
        c=(a+b)/10;

        char z=t+'0';
        final.push_back(z);
        
    }

    reverse(final.begin(),final.end());
    ss1.clear();
    ss2="0";

    cout<<1;//
    return final;
}



string cheng(string s,string num){
    string final;
    final.clear();
    ss1.clear();
    ss2="0";

    int len_s=s.size();
    int len_num=s.size();

    int a,b;
    int t=0,c=0;

    int j;
    for(j=0;j<len_num;j++){
        
        for(int k=0;k<len_s;k++){
            a=s[k]-'0';
            b=num[j]-'0';

            t=(a*b)%10+c;
            c=(a*b)/10;

            char z=t+'0';
            if(j==0)ss1.push_back(z);
            else ss2.push_back(z);
        }
    }
    char zz=c+'0';
    if(j==0)ss1.push_back(zz);
    else ss2.push_back(zz);


    if(len_num==1){
        final=ss1;
        reverse(final.begin(),final.end());
    }
    else final=plusy(ss1,ss2);
    cout<<"-"<<ss2<<"-";

    return final;
}



int main(){
    int n;
    cin>>n;

    string arr[51];

    arr[1]="1";
    for(int i=2;i<=n;i++){
        s=arr[i-1];
        reverse(s.begin(),s.end());

        if(i<10)num=i+'0';
        else num=to_string(i);
        reverse(num.begin(),num.end());

        arr[i]=cheng(s,num);

        cout<<arr[i]<<endl;
    }




    return 0;
}