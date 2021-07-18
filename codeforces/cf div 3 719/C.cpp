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
 

 if(n==2){
 	cout<<"-1\n";
 	return;
 }

 if(n==1){
 	cout<<"1\n";
 	return;
 }
 int odd=1,even=4;
 for (int k = 1; k <= n; ++k)
 {	
 	


 	if(k%2!=0){
 		for (int i = 0; i < n-1; ++i)
 		{
 			cout<<odd<<" ";
 			odd+=2;
 		}
 		if(k==n){
 			cout<<2<<"\n";
 		}
 		if(k!=n){
 			cout<<odd<<" ";
 			odd+=2;
 			cout<<"\n";
 		}
 		
 	}
 	else {
 		for (int i = 0; i < n-1; ++i)
 		{
 			cout<<even<<" ";
 			even+=2;
 		}
 		if(k==n){
 			cout<<2<<"\n";
 		}
 		if(k!=n){
 			cout<<even<<" ";
 			even+=2;
 			cout<<"\n";
 		}
 		
 	}


 }
}




int main(){
ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
int t=1;
cin>>t;
while(t--){
	solve();

}

}