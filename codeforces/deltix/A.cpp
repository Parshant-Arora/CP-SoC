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
 std::vector<int> v; //vector of INT
 //for (int i = 0; i < n; ++i)cin>>v[i];
 //sort(v.begin(),v.end());
 string s;
 cin>>s;
 
 for (int i = 0; i < n; ++i)
 {
     if(s[i]=='1')v.push_back(i);
 }

 //v.size()==1
 if(v.size()==0){
    for (int i = 0; i < n; ++i)
    {
        cout<<s[i];
    }
    cout<<"\n";
    return;
 }





 for (int i =1; i < v.size(); ++i)
 {
     int zer = v[i]-v[i-1]-1;
     
    for (int j = 0; j <min(m,zer/2); ++j)
    {
        s[v[i-1]+j+1] = '1';
        s[v[i-1]+zer-j] = '1';
    }


 }

 for (int i = v[0]-1; i>=max(0,v[0]-m) ; i--)
 {
     s[i] = '1';
 }

 for (int i = v[v.size()-1]+1; i<=min(n-1,v[v.size()-1]+m) ; i++)
 {
     s[i] = '1';
 }
 
 for (int i = 0; i < n; ++i)
 {
     cout<<s[i];
 }
 
 cout<<"\n";
 
}




int main(){
ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
int t=1;
cin>>t;
while(t--){
    solve();

}

}