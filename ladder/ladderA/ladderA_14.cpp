#include<iostream>
using namespace std;

int main(){
int pos=1;
string s,t;
cin>>s>>t;
int index=0;
while(t[index]!='\0'){
	if(s[pos-1]==t[index])pos++;
 	index++;
}
cout<<pos;
}