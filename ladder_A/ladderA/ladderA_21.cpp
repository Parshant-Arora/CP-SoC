#include<iostream>
#include<string>
#include <stdlib.h>
#include <stdio.h>
#include<vector>
#include<bits/stdc++.h>
using namespace std;


void solve(){
 string s;
 cin>>s;
 /*std::vector< > v;
 int temp;
 for (int i = 0; i < n; ++i)
 {
 	cin>>temp;
 	v.push_back(temp);
 }*/
 for (int i = s.size()-1; i >=0 ; i--)
 {
 	int temp =s[i]-'0';
 	if(temp>=5){
 		cout<<"-O|";
     	}
    else {
    	cout<<"O-|";
    }

    for (int i = 0; i < temp%5; ++i)
    {
    	cout<<"O";
    }
    cout<<"-";

    for (int i =0 ; i < 5-temp%5-1; ++i)
    {
    	cout<<"O";
    }

    cout<<"\n";

 	}


  

 

}




int main(){
ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
int t=1;
//cin>>t;
while(t--){
	solve();

}

}