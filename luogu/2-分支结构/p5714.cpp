#include<bits/stdc++.h>
using namespace std;

int main(){
    float m,h,bmi=0.0;
    cin>>m>>h;

    bmi=m/h/h;

    if(bmi<18.5)cout<<"Underweight";
    else if(bmi>=18.5 && bmi<24)cout<<"Normal";
    else{
        string BMI=to_string(bmi);
        int len=BMI.size();

        for(int i=len-1;i>=0;i--){
            if(BMI[i]=='0')BMI.pop_back();
            else break;
        }

        len=BMI.size();
        if(len>7){
            BMI=BMI.substr(0,8);
            int a=BMI[7]-'0';
            int b=BMI[6]-'0';
            if(a>4)b++;
            BMI=BMI.substr(0,6);
            BMI+=(b+'0');

        }

        cout<<BMI<<endl<<"Overweight";
    }


    return 0;
}