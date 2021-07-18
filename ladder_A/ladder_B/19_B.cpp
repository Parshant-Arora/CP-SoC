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
 char v[n][m];
 bool p[n][m];
 
/*bool** p = new bool*[n];
for(int i = 0; i < n; ++i)
    p[i] = new bool[m];
*/

 //cout<<"here\n";
 /*vector<vector<char>> v;
 
 bool** p = new bool*[n];
for(int i = 0; i < n; ++i)
    p[i] = new bool[m];
 
 char temp;

 for(int i=0; i<n; i++)
 { 
    vector<char> row;
    for(int j=0; j<m; j++){
      cin>>temp;

      row.push_back(temp);
    }
    v.push_back(row);
 	//cout<<i<<"here\n";
 }*/


 //cout<<"here g\n";




 for(int i=0; i<n; i++)
 { 
    for(int j=0; j<m; j++){
    cin>>v[i][j];
    p[i][j]=false;  

    }
    //cout<<i<<"here\n";
   
 }

 for (int i = 0; i < n; ++i)
 {
 	for (int j = 0; j < m; ++j)
 	{
 		
            //cout<<"check "<<v[i][j]<<"\n";
 			for (int a = j+1; a < m ; ++a)
 			{
 				if(v[i][j]==v[i][a]){
                    //cout<<"made true "<<i<<j<<" "<<i<<a<<"\n";
 					p[i][j]=true;
 					p[i][a]=true;
 				}
 			}

 			for (int a = i+1; a<n; ++a)
 			{
 				if(v[i][j]==v[a][j]){
 					p[i][j]=true;
                    //cout<<"made true "<<i<<j<<" "<<a<<j<<"\n";
 					p[a][j]=true;
 				}	
 			}

        
 	}
 }

//cout<<"outign \n";
 for (int i = 0; i < n; ++i)
 {
 	for (int j = 0; j < m; ++j)
 	{
 		if(!p[i][j])
 		{
 			cout<<v[i][j];
 		}
 	}
 }
 cout<<"\n";

 

 

 

}




int main(){
int t=1;
//cin>>t;
while(t--){
	solve();

}

}