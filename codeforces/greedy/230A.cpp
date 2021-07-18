#include<iostream>
#include<string>
#include <stdlib.h>
#include <stdio.h>
#include<vector>
#include<bits/stdc++.h>
using namespace std;


void solve(){
 int s,n;
 cin>>s>>n;
 std::vector<pair<int,int>>v;
 int x,y;
 for (int i = 0; i < n; ++i)
 {
 	cin>>x>>y;
 	v.push_back(make_pair(x,y));
 }

 sort(v.begin(),v.end());

 for (int i = 0; i < n; ++i)
 {
 	if(s>v[i].first){
 		s+=v[i].second;
 	}
 	else {
 		cout<<"NO\n";
 		return;
 	}
 }

 cout<<"YES\n";

 

 

}




int main(){
ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
int t=1;
//cin>>t;
while(t--){
	solve();

}

}