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
 /*std::vector< > v;
 int temp;
 for (int i = 0; i < n; ++i)
 {
 	cin>>temp;
 	v.push_back(temp);
 }*/
 if(a==b){
 	cout<<0<<" "<<6<<" "<<0<<"\n";
 	return;

 }
 int x,y,z;
 if((a+b)%2==0){y=1;}
 else y=0;

 if(a<b){
 	x = (a+b-1)/2;
 	z = 6-x-y;
 }

 if(a>b){
 	z = (a+b-1)/2;
 	x = 6-z-y;
 }

 cout<<x<<" "<<y<<" "<<z<<"\n";

 

 

}




int main(){
ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
int t=1;
//cin>>t;
while(t--){
	solve();

}

}