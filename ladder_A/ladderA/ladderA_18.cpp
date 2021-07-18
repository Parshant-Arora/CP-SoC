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
 //std::vector<string> v;
 
 int hz=0,vz=0; 

 std::vector<bool> v(n+m,1);

 char temp;
 for (int i = 0; i < n; ++i)
 {	

 	for (int j = 0; j < m; ++j)
 	{
 		cin>>temp;
 		if(temp=='S'){
 			v[i]=0;
 			v[n+j]=0;
 		}
 	}
 		
 }

 for (int i = 0; i < n+m; ++i)
 {
 	if(i<n && v[i]==1)hz++;
 	if(i>=n && v[i]==1)vz++;
 }

 //cout<<hz<<" "<<vz<<"\n";

 cout<<hz*m + vz*n - hz*vz<<"\n"; 

 

 

}




int main(){
ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
int t=1;
//cin>>t;
while(t--){
	solve();

}

}