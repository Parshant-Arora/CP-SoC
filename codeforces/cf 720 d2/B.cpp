#include<iostream>
#include<string>
#include <stdlib.h>
#include <stdio.h>
#include<vector>
#include<algorithm>
#include<bits/stdc++.h>
using namespace std;

int req(std::vector<int> v, int i, int n){
	int add=1;
	while(__gcd(v[i]+add,v[i-1])!=1){
		add++;
	}
	return v[i]+add;
}


void solve(){
 int n;
 cin>>n;
 int count=0,index=0;
 std::vector<int> v;
 v.push_back(1e9+10);
 int temp;
 
 for (int i = 0; i < n; ++i)
 {
 	cin>>temp;
 	v.push_back(temp);
 }
 int i0=std::min_element(v.begin(),v.end()) - v.begin();
 

 if(i0!=1){
 	cout<<n<<"\n";
 	cout<<1<<" "<<i0<<" "<<v[i0]<<" "<<v[1]<<"\n";
 }
 if(i0==1){
 	cout<<n-1<<"\n";

 }

 v[1]=v[i0];
 for (int i = 2; i <= n; ++i)
 {  
 	cout<<1<<" "<<i<<" "<<v[1]<<" "<<v[1]+i-1<<"\n";
 	v[i]=v[1]+i-1;
 }
 //cout<<v<<"\n";
 /*for (int i = 1; i <=n; ++i)
 {
 	cout<<v[i]<<" ";
 }*/
 
}




int main(){
ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
int t=1;
cin>>t;
while(t--){
	solve();

}

}