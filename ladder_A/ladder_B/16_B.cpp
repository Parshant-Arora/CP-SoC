#include<iostream>
#include<string>
#include <stdlib.h>
#include <stdio.h>
#include<vector>
#include<bits/stdc++.h>
using namespace std;


void solve(string s){
 for (int i = 0; i < s.size(); ++i)
 {
 	//if(s.size()%2!=0)
 	if(i%2==0 && i!=0 && i!=s.size()){
 		if(s.size()%2!=0 && i==s.size()-1){	
 								cout<<s[i];
 								break;
 						}
 		cout<<"-";
 	}
    cout<<s[i];
 }
}




int main(){
int t=1;
//cin>>t;
int n;
cin>>n;
string s;
cin>>s;
while(t--){
	solve(s);

}

}