#include<iostream>
#include<string>
#include <stdlib.h>
#include <stdio.h>
using namespace std;





int main(){
//int n;
//cin>>n;
//string 

string s;
cin>>s;

int count_4=0, count_7=0;
for (int i = 0; s[i]!='\0'; ++i)
{
	if(s[i]=='4')count_4++;
	if(s[i]=='7')count_7++;
}
if(count_4==0 && count_7==0)cout<<"-1\n";
else if(count_4<count_7)cout<<"7\n";
else if(count_7<=count_4)cout<<"4\n";
//if(count_4)

}