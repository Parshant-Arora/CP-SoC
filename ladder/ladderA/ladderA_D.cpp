#include<iostream>
#include<string>
using namespace std;

int main(){
string s;
getline(cin,s);
int i=0;
while(s[i]!='\0'){i++;}
int l=1;
while(s[i-l-1]==' ')l++;
l--;
if(s[i-(2+l)]=='a' ||s[i-(2+l)]=='e' ||s[i-(2+l)]=='i' ||s[i-(2+l)]=='o' ||s[i-(2+l)]=='y' ||s[i-(2+l)]=='u')cout<<"YES";
else if(s[i-(2+l)]=='A' ||s[i-(2+l)]=='E' ||s[i-(2+l)]=='I' ||s[i-(2+l)]=='O' ||s[i-(2+l)]=='U'||s[i-(2+l)]=='Y')cout<<"YES";
else cout<<"NO";	

}