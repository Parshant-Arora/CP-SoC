#include<iostream>
#include<string>
using namespace std;

int main(){
int t;
cin>>t;
string s;
while(t--){
cin>>s;
int i=0;
while(s[i]!='\0'){i++;}

if(i>10)cout<<s[0]<<i-2<<s[i-1]<<"\n";
else cout<<s<<"\n";
}
}