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
 for (int i = 0; i < n; ++i)
 {
 	cin>>temp;
 	a.push_back(temp);
 }
 
 int m;
 cin>>m;
 std::vector<int> b;
 //int temp;
 for (int i = 0; i < m; ++i)
 {
 	cin>>temp;
 	b.push_back(temp);
 }
 
 sort(a.begin(),a.end());
 sort(b.begin(),b.end());

 int count=0;
 
 std::vector<bool> v(n,0);

 for (int j = 0; j < m; ++j)
 {
 	for (int i = 0; i < n; ++i)
 	{
 		if(abs(b[j]-a[i])<=1 && v[i]==0){
 			count++;
 			v[i]=1;
 			break;
 		}
 	}
 }
 
 

 cout<<count<<"\n";

}




int main(){
ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
int t=1;
//cin>>t;
while(t--){
	solve();

}

}