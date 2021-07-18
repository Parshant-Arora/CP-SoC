#include<iostream>
#include<string>
#include <stdlib.h>
#include <stdio.h>
using namespace std;





int main(){
int n;
cin>>n;
string s;
cin>>s;
int count_a=0,count_i=0;
for (int i = 0; i < n; ++i)
{
	if(s[i]=='A')count_a++;
	if(s[i]=='I')count_i++;

}
if(count_i==0)cout<<count_a<<"\n";
else if(count_i>=2)cout<<"0\n";
else cout<<1<<"\n";

}