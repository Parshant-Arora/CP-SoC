#include<iostream>
#include<string>
#include <stdlib.h>
#include <stdio.h>
#include<vector>
#include<bits/stdc++.h>
using namespace std;


void solve(){
 int n;
 cin>>n;

 string s;
 cin>>s;
 if(n==1){
 	if(s[0]=='0'){
 		cout<<"BOB\n";
 		return;
 	}
 	else {
 		cout<<"DRAW\n";
 		return;
 	}

 }
 int zer=0;
 for (int i = 0; i < n; ++i)
 {
 	if(s[i]=='0')zer++;
 }

 if(n%2!=0){
 	if(s[n/2]=='0'){

 		if(zer==1){
 			cout<<"BOB\n";
 			return;
 		}

 		
 		cout<<"ALICE\n";
 		return;
 	}
 }

 
 
 cout<<"BOB\n";
 return;
 

}




int main(){
ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
int t=1;
cin>>t;
while(t--){
	solve();

}

}