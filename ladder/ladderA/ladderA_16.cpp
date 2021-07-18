#include<iostream>
#include<string>
#include <stdlib.h>
#include <stdio.h>
#include<vector>
using namespace std;


void solve(int &count){
 char a,b,c;
 
 cin>>a>>b>>c;
 if(a==b){
 	if(a=='+')count++;
 	if(a=='-')count--;
 }
 if(b==c){
 	if(b=='+')count++;
 	if(b=='-')count--;		
 }

}




int main(){
int t;
cin>>t;
int count=0;
while(t--){
	solve(count);

}
cout<<count<<"\n";	
}