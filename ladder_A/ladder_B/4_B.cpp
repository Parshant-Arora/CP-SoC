#include<iostream>
#include<string>
#include <stdlib.h>
#include <stdio.h>
using namespace std;





int main(){
//unsigned long long int n;
//cin>>n;
char c;
//cin>>c;
int sum=0;
int count=0;
string s;
cin>>s;
int i=0;
//cout<<"s "<<s<<endl;
if(s[1]=='\0'){cout<<"0\n";return 0;}
//if(atoi(&c)<10){cout<<"0\n";return 0;}
while(s[i]!='\0'){
int temp=s[i]-'0';
//cout<<"taking temp "
sum+=temp;i++;}
count++;
//cout<<"sum q "<<sum<<"\n";

int sum_red=sum;
while(sum_red>=10){
	sum=0;
	int n=sum_red;
	while(!(n/10==0 && n%10==0)){sum+=n%10; n/=10;}
	//string s = to_string(sum);
	count++;
//	cout<<"sum "<<sum<<"\n";
 	sum_red=sum;

//cout<<num_steps(n);
}
cout<<count<<"\n";
}