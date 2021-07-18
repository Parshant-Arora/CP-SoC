#include<iostream>
#include<string>
#include <stdlib.h>
#include <stdio.h>
#include<vector>
#include<bits/stdc++.h>
using namespace std;


 long long int power(long long int n, long long int p){
 	long long int s=1;
 	for (long long int i = 0; i < p; ++i)
 	{
 		s*=n;
 	}

 	return s;
 }

long long int solve(string n){
 /*long long int n;
 cin>>n;
 std::vector< > v;
 long long int temp;
 for (long long int i = 0; i < n; ++i)
 {
 	cin>>temp;
 	v.push_back(temp);
 }

 */
 //string n;
 //cin>>n;
 if(n.size()==1){
 	if(n[0]=='1')return 1;
 	if(n[0]=='0')return 0;
 }
 if(n[0]>'1'){
 	return power(2,n.size())-1;
 }



 if(n[0]=='1'){
 	return power(2,n.size()-1)-1 + solve(&n[1])+1;

 }

 if(n[0]=='0'){
 	return solve(&n[1]);
 }
 

}




int main(){
ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
long long int t=1;
//cin>>t;
while(t--){
	string n;
	cin>>n;
	cout<<solve(n)<<"\n";

}

}