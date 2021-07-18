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
 /*std::vector< > v;
 int temp;
 for (int i = 0; i < n; ++i)
 {
 	cin>>temp;
 	v.push_back(temp);
 }*/

 if(n==1){
 	cout<<k<<"\n";
 	return;
 }

 int q = k/(n-1), r=k%(n-1);
 int p=0;
 for (int i = 0; i<n; ++i)
 {
 	for (int j = 0; j < n; ++j)
 	{
 		if(j==p){
 			cout<<r;
 		
 		}
 		else cout<<q;
 		cout<<" ";


 	}
 	cout<<"\n";
 	p++;
 }

 

 

}




int main(){
ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
int t=1;
//cin>>t;
while(t--){
	solve();

}

}