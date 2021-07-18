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
 /*std::vector< > v;
 int temp;
 for (int i = 0; i < n; ++i)
 {
 	cin>>temp;
 	v.push_back(temp);
 }*/
 int d=1;
 for (int i = 2; i <= sqrt(n); ++i)
 {
 	if(n%i==0){d=i;break;}
 }

 if(d==1){
 	cout<<1<<" "<<n-1<<"\n";
 	return;
 }

 else {
 	cout<<n/d<<" "<<n-n/d<<"\n";
 	return;
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