#include<bits/stdc++.h>

using namespace std;

int main(){
	int op;
	cin>>op;
	
	if(op==1)cout<<"I love Luogu!";
	else if(op==2)cout<<6<<" "<<4;
	else if(op==3){
		cout<<3<<endl;
		cout<<12<<endl;
		cout<<2;
	}else if(op==4){
		float L=500;
		int stu=3;
		printf("%.3f",L/stu);
	}else if(op==5){
		cout<<(260+220)/(12+20);
	}else if(op==6){
		cout<<sqrt(36+81);
	}else if(op==7){
		cout<<110<<endl<<90<<endl<<0;
	}else if(op==8){//
        string s;
        s=to_string(2*3.141593*5);
        s+=to_string(3.141593*25);
        s+=to_string((4/3)*3.141593*125);

        for(int i=0;i<s.size();i++){
            if(s[i]=='.')continue;
            cout<<s[i]<<endl;
        }
		
	}else if(op==9){
		cout<<22;
	}else if(op==10){
		cout<<9;
	}else if(op==11){
		
		cout<<100/3;
	}else if(op==12){
		cout<<int('M')-int('A')+1<<endl;
		cout<<char(int('A')+17);
	}else if(op==13){//
		float sum=(4/3)*3.141593*(64+1000);
		cout<<int(cbrt(sum));
	}else if(op==14){//
		int eve=110,stu=10,sum=0;
		while(1){
			eve--;
			stu++;
			sum=eve*stu;
			if(sum>=3500)break;
		}
		int eve1=110,stu1=10,sum1=0;
		while(1){
			eve1--;
			stu1++;
			sum1=eve1*stu1;
			if(sum1>=3500)break;
		}
		cout<<70;
	}
		
	
	return 0;
}