#include<iostream>
#include<string>
#include <stdlib.h>
#include <stdio.h>
#include<vector>
#include<bits/stdc++.h>
using namespace std;


void solve(){
 int n,k;
 cin>>n>>k;
 string s;
 cin>>s;
 std::vector<pair<char,int>> v;
 int temp;
 for (int i = 0; i < n; ++i)
 {
 	temp = s[i];
 	v.push_back(make_pair(temp,i));
 }

 sort(v.begin(),v.end());

 vector<bool>pres(n,1);

 for (int i = 0; i < k; ++i)
 {
 	pres[v[i].second] = 0;
 }

 for (int i = 0; i < n; ++i)
 {
 	if(pres[i])cout<<s[i];
 }
 cout<<"\n";

 



 

 

}




int main(){
ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
int t=1;
//cin>>t;
while(t--){
	solve();

}

}