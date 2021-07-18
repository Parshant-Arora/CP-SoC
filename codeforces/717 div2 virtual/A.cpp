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
 std::vector<int> a;
 int temp;
 for (int i = 0; i < n; ++i)
 {
 	cin>>temp;
 	a.push_back(temp);
 }

 int i=0,j=n-1;
 int sum=0;
 while(i<j && sum<k){
 	while(a[i]==0 && i<n){i++;}
 	//j++;
 	//if()
 	if(i>=n)break;
 	a[i]-=1;
 	a[j]+=1;
 	sum+=1;



 }

 for (int i = 0; i < n; ++i)
 {
 	cout<<a[i]<<" ";
 }
 

 cout<<"\n";

}




int main(){
ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
int t=1;
cin>>t;
while(t--){
	solve();

}

}