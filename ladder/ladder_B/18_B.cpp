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
 for (int i = 0; i < n; ++i)
 {
 	cin>>temp;
 	v.push_back(temp);
 }

 int maxi=0;

 for (int i = 0; i < n; ++i)
 {
 	int count=1;
 	for (int j = i+1; j < n; ++j)
 	{
 		if(v[j]>v[j-1])break;
 		count++;
 	}
 	
 	for (int j = i-1; j >=0; j--)
 	{
 		if(v[j]>v[j+1])break;
 		count++;
 	}
 	
 	if(i==0){
 		maxi=count;
 		continue;
 	}
 	maxi=max(maxi,count);
    //cout<<count<<"\n";
 }

 cout<<maxi<<"\n";

 




}




int main(){
int t=1;
//cin>>t;
while(t--){
	solve();

}

}