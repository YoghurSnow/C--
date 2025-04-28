#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,k;
    cin>>n>>k;

    int sumA=0,sumB=0;
    int A=0,B=0;

    for(int i=1;i<=n;i++){
        if(i%k==0){
            sumA+=i;
            A++;
        }
        else {
            sumB+=i;
            B++;
        }
    }

    float a,b;
    a=(sumA*1.0)/(A*1.0);
    b=(sumB*1.0)/(B*1.0);

    printf("%.1f",a);
    cout<<" ";
    printf("%.1f",b);



    return 0;
}