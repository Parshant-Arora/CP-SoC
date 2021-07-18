#include<iostream>
#include<string>
#include <stdlib.h>
#include <stdio.h>
#include<vector>
#include<bits/stdc++.h>
using namespace std;


int solve(string s){
 //long long int n;
 //string s;
 //cin>>n;
 /*std::vector< > v;
 int temp;
 for (int i = 0; i < n; ++i)
 {
 	cin>>temp;
 	v.push_back(temp);
 }*/

 /*if(n<=9){
 	cout<<n<<"\n";
 	return;
 }
 
 long long int m=n;
 int count=0,d;
 while(!(m/10==0 && m%10==0)){
 	count++;
 	d=m;
 	m/=10;

 }
 int th=d;
 //cout<<count;
 for (int i = 0; i < count-1; ++i)
 {
 	th=th*10+d;
 }
 cout<<th<<"\n";
 if(n>=th){
 	cout<<d*count<<"\n";
 	return;
 }
 else {
 	cout<<(d-1)*count +  

 }
 */
 if(s.size()==1){
 	return s[0]-'0';

 }
 string p=s;
 for (int i = 0; p[i]!='\0'; ++i)
 {
 	p[i]=s[0];
 }
 if(s>=p){
 	return (s[0]-'0') + 9*(s.size()-1);
 }
 else{
 	return (s[0]-'0'-1) + 9*(s.size()-1);

 }
 

 

}




int main(){
ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
int t=1;
cin>>t;
while(t--){
	string s;
	cin>>s;
	cout<<solve(s)<<"\n";

}

}