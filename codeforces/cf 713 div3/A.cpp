#include<iostream>
#include<string>
#include <stdlib.h>
#include <stdio.h>
#include<vector>
using namespace std;




int main(){
int t;
cin>>t;
while(t--){
int n;
cin>>n;
//int f,s;
//cin>>f;
//cin>>s;
int *a=new int [n];
for (int i = 0; i < n; ++i)
{
	cin>>a[i];
}
int f=a[0],s=a[1],th=a[2];
if(f!=s){
	if(s==th)cout<<1<<"\n";
	if(f==th)cout<<2<<"\n";
	continue;
}
for (int i = 1; i < n; ++i)
{
	s=a[i];
	if(s!=f){cout<<i+1<<"\n";break;}

}
}
}
