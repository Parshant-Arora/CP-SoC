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
 for (int i = 0; i < 2*n; ++i)
 {
 	cin>>temp;
 	v.push_back(temp);
 }
 sort(v.begin(),v.end());
 for (int i = 0; i < n; ++i)
 {
     cout<<v[i]<<" "<<v[2*n-i-1]<<" ";
 }
 cout<<"\n";
 return;

 

 

}




int main(){
ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
int t=1;
cin>>t;
while(t--){
	solve();

}

}