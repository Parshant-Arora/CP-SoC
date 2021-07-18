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
 std::vector<int> a;
 int temp;
 int count=0;
 int x,y;
 for (int i = 0; i < n; ++i)
 {
 	cin>>temp;
 	if(temp==1)x=i;
 	if(temp==n)y=i;
 	if(temp==i+1)count++;
 	a.push_back(temp);
 }

 if(count==n){
 	cout<<"0\n";
 	return;
 }

 if(a[0]==1){
 	cout<<"1\n";
 	return;
 }

 if(a[n-1]==n){
 	cout<<"1\n";
 	return;
 }

 /*if(count>0){
 	cout<<"2\n";
 	return;
 }*/

 
 	if(x!=n-1){
 		cout<<"2\n";
 		return;
 	}
 	if(y!=0){
 		cout<<"2\n";
 		return;
 	}

 	cout<<"3\n";
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