#include<bits/stdc++.h>
using namespace std;

int main(){
    float n;
    cin>>n;

    float sum,a,b,c;
    a=n-400.0;
    if(a<0)a=0;

    b=n-a-150.0;
    if(b<0)b=0;

    c=n-a-b;

    sum=a* 0.5663+b* 0.4663+c*0.4463;

    printf("%.1f",sum);


    return 0;
}