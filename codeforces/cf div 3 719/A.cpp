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
 std::vector<int> present;
 string s;
 cin>>s;
 //int temp;
 for (int i = 0; i < 26; ++i)
 {
 	
 	present.push_back(0);
 }

 if(n==1){
 	cout<<"YES\n";
 	return;
 }
 present[s[0]-'A']++;
 for (int i = 1; i < n; ++i)
 {
 	if(s[i]!=s[i-1]){
 		if(present[s[i]-'A']!=0){
 			cout<<"NO\n";
 			return;
 		}

 		else present[s[i]-'A']++;
 	}
 }

 cout<<"YES\n";

 

 

}




int main(){
ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
int t=1;
cin>>t;
while(t--){
	solve();

}

}