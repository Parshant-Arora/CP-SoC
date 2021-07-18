#include<iostream>
#include<string>
#include <stdlib.h>
#include <stdio.h>
#include<vector>
#include<bits/stdc++.h>
using namespace std;


void solve(){
 
 int x;
 double y;
 cin>>x>>y;

 if(x%5==0){
    if(x+0.5<=y){
        y-=x+0.5;
    }
 }

 cout<<y<<"\n";

 

 

}




int main(){
ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
int t=1;
//cin>>t;
while(t--){
	solve();

}

}