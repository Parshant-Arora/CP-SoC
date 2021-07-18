#include<iostream>
#include<string>
#include <stdlib.h>
#include <stdio.h>
#include<vector>
using namespace std;

void testcase(){
	
//int n;
	int a,b;
	cin>>a>>b;
	string s;
	cin>>s;
	bool impossi=false;
	int n=s.size();
//std::vector<int> v;
for (int i = 0; s[i]!='\0'; ++i)
{
	if(s[i]=='?'){
		s[i]=s[n-i-1];
		}
	else if(s[i]=='0'){
		if(s[n-i-1]=='1'){cout<<"-1\n";
						 return ;
						}
	}

} //for loop ends




int count_0=0,count_1=0;
for (int i = 0; s[i]!='\0' ; ++i)
{
	if(s[i]=='0')count_0++;
	if(s[i]=='1')count_1++;
}


if(v.size()%2==0){
	if((a-count_0)%2!=0){cout<<-1<<"\n";continue;}
}	
for (int i = 0; i < (a-count_0)/2; ++i)
	{
		s[v[i]]='0';
		s[n-v[i]-1]='0';
	}
for (int i = (a-count_0)/2; i <(a-count_0)/2 + (b-count_1)/2; ++i)
	{
		s[v[i]]='1';
		s[n-v[i]-1]='1';
	}

if(v.size()%2!=0){
	if((a-count_0)%2!=0){s[(n)/2]='0';}
	if((b-count_1)%2!=0){s[n/2]='1';}
}
cout<<s<<"\n";





}


int main(){
int t;
cin>>t;
while(t--)testcase();
}