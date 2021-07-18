#include<iostream>
using namespace std;

int main(){
int n,k,count,output=0;

cin>>n>>k;
for (int i = 0; i < n; ++i)
{
int p;
cin>>p;
count=0;
while(!(p/10==0 && p%10==0)){
if(p%10==4 || p%10==7)count++;
if(count>k)break;
p=p/10;
}
if(count<=k)output++;	
}
cout<<output<<"\n";
}
