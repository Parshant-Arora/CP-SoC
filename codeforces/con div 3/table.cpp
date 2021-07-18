#include<iostream>/*Author Parshant Arora*/
using namespace std;

int main(){
int t;
cin>>t;
unsigned long long int n,m,x,i,j;
while(t--){
cin>>n>>m>>x;
i=x%n;
if(i==0)i=n;
double p=x*1.0/n;

j=x/n +1;

if(p==x/n)j=x/n;
//cout<<"i "<<i<<" j "<<j<<" \n";
cout<<j+(i-1)*m<<"\n";
}


}