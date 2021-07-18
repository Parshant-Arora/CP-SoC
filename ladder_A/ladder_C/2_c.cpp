#include<iostream>
#include<string>
#include <stdlib.h>
#include <stdio.h>
#include<vector>
#include<bits/stdc++.h>
using namespace std;


void solve(){
 int n,m;
 cin>>n>>m;
 std::vector<long long int> v;
 long long int temp;
 for (int i = 0; i < n; ++i)
 {
 	cin>>temp;
 	v.push_back(temp);
 }
 long long int sum=0,idx=1,x;
 
 for (int i = 0; i < m; ++i)
 {
   cin>>x;
   while(sum+v[idx-1]<x){sum+=v[idx-1];idx++;}
   cout<<idx<<" "<<x-sum<<"\n";

 }
 

 

 

 

}




int main(){
ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
long long int t=1;
//cin>>t;
while(t--){
	solve();

}

}