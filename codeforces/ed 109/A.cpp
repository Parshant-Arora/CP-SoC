#include<iostream>
#include<string>
#include <stdlib.h>
#include <stdio.h>
#include<vector>
#include<bits/stdc++.h>
using namespace std;


void solve(){
 int k;
 cin>>k;
 /*std::vector< > v;
 int temp;
 for (int i = 0; i < n; ++i)
 {
 	cin>>temp;
 	v.push_back(temp);
 }*/
 if(k==100){
 	cout<<1<<"\n";
 	return;
 }
 int g=__gcd(k,100-k);
 //cout<<g<<"\n";

 cout<<k/g + (100-k)/g<<"\n";


 

 

}




int main(){
ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
int t=1;
cin>>t;
while(t--){
	solve();

}

}