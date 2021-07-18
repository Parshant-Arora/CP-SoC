#include<iostream>
#include<string>
#include <stdlib.h>
#include <stdio.h>
#include<vector>
#include<bits/stdc++.h>
using namespace std;


void solve(){
 long long int x,y,a,b;
 cin>>x>>y>>a>>b;
 //std::vector< > v;
 //int temp;
 /*for (int i = 0; i < n; ++i)
 {
 	cin>>temp;
 	v.(temp);
 }*/
 
 if(b>2*a){
 	long long int f = (x+y)*a;
 	cout<<f<<"\n";
 }

 else {
 	long long int f = min(x,y)*b + (max(x,y)-min(x,y))*a;
 	cout<<f<<"\n";
 }

 

 

}




int main(){
ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
int t=1;
cin>>t;
while(t--){
	solve();

}

}