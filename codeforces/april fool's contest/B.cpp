#include<iostream>
#include<cmath>
using namespace std;

int main(){
int n;
int sum=0;
cin>>n;
while(!(n/10==0 && n%10==0)){sum+=n%10;n/=10;}
if(sum%9==0)cout<<"9\n";
else cout<<sum%9<<"\n";
}