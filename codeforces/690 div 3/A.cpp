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
std::vector<int> v(n); //vector of INT
for (int i = 0; i < n; ++i)cin>>v[i];
for (int i = 0; i < n/2; ++i)
{
    cout<<v[i]<<" "<<v[n-1-i]<<" ";
}
if(n%2!=0)cout<<v[n/2];
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