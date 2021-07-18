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
 std::vector<int> v;
 int temp;
 for (int i = 0; i < n; ++i)
 {
 	cin>>temp;
 	v.push_back(temp);
 }

 sort(v.begin(),v.end());
 int count=0;
 for (int i = 0; i < n; ++i)
 {
 	if(v[i]<=5-k)count++;
 }

 cout<<count/3<<"\n";


 

 

}




int main(){
ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
int t=1;
//cin>>t;
while(t--){
	solve();

}

}