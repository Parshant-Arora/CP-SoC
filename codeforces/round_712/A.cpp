#include<iostream>
#include<string>
#include <stdlib.h>
#include <stdio.h>
#include<vector>
using namespace std;





int main(){
int n;
cin>>n;
string s;
while(n--){
cin>>s;
bool found=false;
int i = 0;
for (; s[i]!='\0'; ++i )
{
	if(s[i]!='a'){found=true;cout<<"YES\n";break;}
}
if(found){
for (int j = 0; j < s.size()-i; j++)
{
	cout<<s[j];
}
cout<<"a";
for (int j = s.size()-i; j < s.size(); ++j)
{
	cout<<s[j];
}
cout<<"\n";
}

if(!found)cout<<"NO\n";

}


}