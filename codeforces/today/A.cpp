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
 std::vector<int> v;
 int temp;
 for (int i = 0; i < n; ++i)
 {
 	cin>>temp;
 	v.push_back(temp);
 }

 for (int i = 0; i < n; ++i)
 {
 	if(v[i]%2!=0)cout<<v[i]<<" ";
 }

 for (int i = 0; i < n; ++i)
 {
 	if(v[i]%2==0)cout<<v[i]<<" ";
 }
 cout<<"\n";

 

 

}




int main(){
int t;
cin>>t;
while(t--){
	solve();

}

}