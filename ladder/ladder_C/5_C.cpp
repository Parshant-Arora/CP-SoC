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
 /*std::vector< > v;
 int temp;
 for (int i = 0; i < n; ++i)
 {
 	cin>>temp;
 	v.push_back(temp);
 }*/
 string s;
 cin>>s;
 int n=s.size();
 int ind=-1,dist=n+1,max_d=dist;
 for (int i = 0; i < n; ++i)
 {
 	if(s[i]=='R'){
 		dist=i-ind;
 		if(ind==-1)max_d=0;
 		if(dist>=max_d){
 			max_d=dist;
 			
 		}
        ind=i;
 	}
 }
 max_d=max(max_d,n-ind);
 cout<<max_d<<"\n";


 

 

}




int main(){
ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
int t=1;
cin>>t;
while(t--){
	solve();

}

}