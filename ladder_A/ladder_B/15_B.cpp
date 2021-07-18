#include<iostream>
#include<string>
#include <stdlib.h>
#include <stdio.h>
#include<vector>
#include <algorithm>
#include<bits/stdc++.h>
using namespace std;


void solve(std::vector<string> v1,std::vector<string> v2,int n){
string s;


for (int i = 0; i < n; ++i)
 {
 	cin>>s;
 	std::vector<string>::iterator itr = std::find(v1.begin(), v1.end(), s);
 	if (itr != v1.cend()) {
 		if(v2[std::distance(v1.begin(), itr)].size()<v1[std::distance(v1.begin(), itr)].size())
        cout<<v2[std::distance(v1.begin(), itr)]<<" ";
 		else cout<<v1[std::distance(v1.begin(), itr)]<<" ";  
    }
 } 


}




int main(){
int t=1;

//cin>>t;
int n,m;
cin>>n>>m;
std::vector<string> v1,v2;
string test;
for (int i = 0; i < m; ++i)
{
	cin>>test;
	v1.push_back(test);
	cin>>test;
	v2.push_back(test);
}

while(t--){
	solve(v1,v2,n);
    cout<<"\n";
}

}