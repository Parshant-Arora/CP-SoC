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

 string str;
 getline (cin, str);
 
 std::vector<bool> p(26,0);

 for (int i = 0; i < str.size(); ++i)
 {
 	if(str[i]<='z' && str[i]>='a'){p[str[i]-'a']=1;}
 }
 int count=0;
 for (int i = 0; i < 26; ++i)
 {
 	if(p[i])count++;
 }


 cout<<count<<"\n";


 

 

 

}




int main(){
ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
int t=1;
//cin>>t;
while(t--){
	solve();

}

}