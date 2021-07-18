#include<iostream>
using namespace std;

int main(){
string s,t;
cin>>s>>t;
int i=0;
while(s[i]!='\0'){i++;}
if(t[i]=='\0' && t[i-1]!='\0'){
	for(int j=0;j<i;j++){if(s[j]!=t[i-j-1]){cout<<"NO";return 0;}}
	cout<<"YES";
	}

else cout<<"NO";
}