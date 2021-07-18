#include<iostream>
#include<string>
#include <stdlib.h>
#include <stdio.h>
#include<vector>
#include<bits/stdc++.h>
using namespace std;


void solve(){
 int n,m;
 cin>>n>>m;
 /*std::vector<vector<char>> v;
 char temp;
 for (int i = 0; i < n; ++i)
 {  std::vector<char> r;
 	for (int j = 0; j < m; ++j)
 	{
 		cin>>temp;
 	    r.push_back(temp);
 	    //cout<<"taken "<<temp<<"\n";
 		
 	}
 	v.push_back(r);
 	
 }*/
 char v[n][m];
 for (int i = 0; i < n; ++i)
 {
 	for (int j = 0; j < m ; ++j)
 	{
 		cin>>v[i][j];
 	}
 }
 int count=0;
 
 for (int i = 0; i < n; ++i)
 {
 	for (int j = 0; j < m; ++j)
 	{   
 		if(v[i][j]=='W'){
				if(i>0 && i<n-1){
					if(j>0 && j<m-1){
						if(v[i-1][j]=='P' || v[i+1][j]=='P' || v[i][j-1]=='P' || v[i][j+1]=='P')count++;
					}
 				 	if(j==0){
 				 		 if(v[i-1][j]=='P' || v[i+1][j]=='P' || v[i][j+1]=='P')count++;
 				 	}
 					if(j==m-1 && m!=1){
 						 if(v[i-1][j]=='P' || v[i+1][j]=='P' || v[i][j-1]=='P')count++;
 					}
 				}

 				if(i==0){
 					if(j>0 && j<m-1){
						if(v[i+1][j]=='P' || v[i][j-1]=='P' || v[i][j+1]=='P')count++;
					}
					if(j==0){
 				 		 if(v[i+1][j]=='P' || v[i][j+1]=='P')count++;
 				 	}
 				 	if(j==m-1 && m!=1){
 						 if(v[i+1][j]=='P' || v[i][j-1]=='P')count++;
 					}
                }

                if(i==n-1 && n!=1){
 					if(j>0 && j<m-1){
						if(v[i-1][j]=='P' || v[i][j-1]=='P' || v[i][j+1]=='P')count++;
					}
					if(j==0){
 				 		 if(v[i-1][j]=='P' || v[i][j+1]=='P')count++;
 				 	}
 				 	if(j==m-1 && m!=1){
 						 if(v[i-1][j]=='P' || v[i][j-1]=='P')count++;
 					}
                }


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