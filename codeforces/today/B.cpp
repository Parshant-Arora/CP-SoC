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
 
 string s;
 cin>>s;
 int niw=0,just=0,m=0;
 for (int i = 0; s[i]!='\0'; ++i)
 {
 	 if(s[i]=='M')m++;
 }
 int t=n-m;
 if(t%2!=0){
 	cout<<"NO\n";
 	return;
 }
 t/=2;
 for (int i = 0; s[i]!='\0'; ++i)
 {
 	if(s[i]=='T'){
 		if(t>0){niw++;t--;}

 		
 			//if(just==0)niw++;
        
        else{
         if(just==0){
        	cout<<"NO\n";
 	        return;
            }
         else just--;
		}
    }
 	 if(s[i]=='M'){
 	 	niw--;
 	 	m--;
 	 	just++;
 	 	if(niw<0 || just<0){
 		cout<<"NO\n";
 		return;
 	    }
 	}
 }


 	 
 
 if(niw!=0 || just!=0)cout<<"NO\n";
 else cout<<"YES\n";
 return;

}




int main(){
int t;
cin>>t;
while(t--){
	solve();

}

}