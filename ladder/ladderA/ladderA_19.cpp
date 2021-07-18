#include<iostream>
#include<string>
#include <stdlib.h>
#include <stdio.h>
#include<vector>
#include<bits/stdc++.h>
using namespace std;


void solve(){
 //int n;
 //cin>>n;
 string s;
 cin>>s;
 std::vector<int> v;
 int temp;
 for (int i = 0; i < s.size(); i+=2)
 {
 	temp = s[i]-'0';
 	v.push_back(temp);
 }

 sort(v.begin(),v.end());

 for (int i = 0; i < v.size(); ++i)
 {
 	cout<<v[i];
 	if(i!=v.size()-1)cout<<"+";
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