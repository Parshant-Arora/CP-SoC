#include<iostream>
#include<string>
#include <stdlib.h>
#include <stdio.h>
#include<vector>
#include<bits/stdc++.h>
using namespace std;


void solve(){
 /*int n;
 cin>>n;
 std::vector< > v;
 int temp;
 for (int i = 0; i < n; ++i)
 {
 	cin>>temp;
 	v.push_back(temp);
 }*/
 string s;
 cin>>s;
 string f="hello";
 int ind=0;
 for (int i = 0; i < s.size(); ++i)
 {
 	if(s[i]==f[ind]){
 		//cout<<i<<" "<<ind<<"\n";
 		ind++;

 	}

 }
 if(ind==5){
 	cout<<"YES\n";
 }
 else cout<<"NO\n";


 

}




int main(){
ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
int t=1;
//cin>>t;
while(t--){
	solve();

}

}