#include<iostream>
#include<string>
#include <stdlib.h>
#include <stdio.h>
#include<vector>
#include<bits/stdc++.h>
using namespace std;


void solve(){
 int a,b;
 cin>>a>>b;
 int n=a+b;
 std::vector<char> v;
 char temp;
 for (int i = 0; i < n; ++i)
 {
 	cin>>temp;
 	v.push_back(temp);
 }

 for (int i = 0; i < n; ++i)
 {
 	if(v[i]=='?')v[i]=v[n-i-1];
 }

 for (int i = 0; i < n; ++i)
 {
 	if(v[i]!=v[n-i-1]){
 		cout<<"-1\n";
 		return;
 	}
 }

 for (int i = 0; i < n; ++i)
 {	
 	if(v[i]=='0')a--;
 	if(v[i]=='1')b--;
 }
 
 if(a<0 || b<0){
 	cout<<"-1\n";
 	return;
 }

 if((a+b)%2==0 && a%2!=0){
 	cout<<"-1\n";
 	return;
 }

 for (int i = 0; i < n; ++i)
 {
 	if(v[i]=='?'){
 		if(a==1 && b==0){
 			v[i]='0';
 			continue;
 		}
 		if(a==0 && b==1){
 			v[i]='1';
 			continue;
 		}
 		if(a>1){
 			v[i]='0';
 			v[n-i-1]='0';
 			//if(i!=n-i-1)
 			a-=2;
 			//else a-=1;
 		}
 		else {
 			v[i]='1';
 			v[n-i-1]='1';
 			//if(i!=n-i-1)
 			b-=2;
 			//else b-=1;
 		}
 	}
 }
 for (int i = 0; i < n; ++i)
 {
 	cout<<v[i];
 }
 cout<<"\n";
 

}




int main(){
ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
int t=1;
cin>>t;
while(t--){
	solve();

}

}