#include<iostream>
#include<string>
#include <stdlib.h>
#include <stdio.h>
#include<vector>
#include<bits/stdc++.h>
using namespace std;


void solve(){
int x;
cin>>x;
if(x>45){
    cout<<"-1\n";
    return;
}
vector<int> v;
int cur = 9;
while(x>cur){
    v.push_back(cur);
    x-=cur;
    cur-=1;
} 

if(x!=0)v.push_back(x);
for (int i = 0; i < v.size(); ++i)
{
    cout<<v[v.size()-1-i];
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