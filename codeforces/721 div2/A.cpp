#include<iostream>
#include<string>
#include <stdlib.h>
#include <stdio.h>
#include<vector>
#include<bits/stdc++.h>
using namespace std;


int power(int n,int p){
	int res=1;
	while(p--)res*=n;
	return res;
}


void solve(){
 int n;
 cin>>n;
 if(n==1){
 	cout<<0<<"\n";
 	return;
 }
 
 int p = 0;
 while(!(n/2==0 && n%2==0)){
 	n=n/2;p++;
 }
 
 cout<<power(2,p-1)-1<<"\n";


 

 

}




int main(){
ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
int t=1;
cin>>t;
while(t--){
	solve();

}

}