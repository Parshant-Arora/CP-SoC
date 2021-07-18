#include<iostream>
#include<string>
using namespace std;

int main(){
string s,t;
cin>>s>>t;
int i=0;
while(s[i]!='\0'){
if(s[i]<='Z')s[i]+='a'-'A';
if(t[i]<='Z')t[i]+='a'-'A';
if(s[i]<t[i]){cout<<"-1";break;}
if(s[i]>t[i]){cout<<"1";break;}
i++;
}
if(s[i]=='\0')cout<<"0";

}	