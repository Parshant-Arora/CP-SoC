#include<iostream>
#include<string>
#include <stdlib.h>
#include <stdio.h>
#include<vector>
using namespace std;


void solve(){
 char a,b,c;
 int count=0;
 cin>>a>>b>>c;
 if(a==b){
 	if(a=='+')count++;
 	if(a=='-')count--;
 }
 if(b==c){
 	if(b=='+')count++;
 	if(b=='-')count--;		
 }
cout<<count<<"\n";	
}




int main(){
int t;
cin>>t;
while(t--){
	solve();

}

}