#include<iostream>
#include<string>
#include <stdlib.h>
#include <stdio.h>
#include<vector>
#include<bits/stdc++.h>
using namespace std;


void solve(){
 string s;
 int n,k;
 cin>>n>>k;
 cin>>s;
 
 std::vector<int> v;
 /*int temp;
 for (int i = 0; i < n; ++i)
 {
 	cin>>temp;
 	v.push_back(temp);
 }*/
 for (int i = 0; i<s.size(); ++i)
 {
 	if(s[i]=='*')v.push_back(i);
 }
 
 if(v.size()==1){
 	cout<<"1\n";
 	return;
 }
 
 int count=1;
 
 for (int i = 0; i < v.size(); ++i)
 {
 	for (int j = i;j < v.size() ; ++j)
 	{
 		if(v[j]-v[i]>k){
 			count++;
 			i=j-1;
 			}
 	}

 }
 cout<<count+1<<"\n";

 

 

}




int main(){
ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
int t=1;
cin>>t;
while(t--){
	solve();

}

}