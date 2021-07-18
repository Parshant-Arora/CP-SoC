#include<iostream>
#include<string>
#include <stdlib.h>
#include <stdio.h>
#include<vector>
#include<bits/stdc++.h>
using namespace std;


void solve(){
 long long int n;
 cin>>n;
 std::vector<long long int> v(n); //vector of long long int
 for (long long int i = 0; i < n; ++i)cin>>v[i];
 //sort(v.begin(),v.end());
 
 cout<<3*n<<"\n";
 for (long long int i = n-1; i >0 ; i-=2)
 {
     cout<<2<<" "<<i<<" "<<i+1<<"\n";
     cout<<1<<" "<<i<<" "<<i+1<<"\n";
     cout<<2<<" "<<i<<" "<<i+1<<"\n";
     cout<<2<<" "<<i<<" "<<i+1<<"\n";
     cout<<1<<" "<<i<<" "<<i+1<<"\n";
     cout<<2<<" "<<i<<" "<<i+1<<"\n";
 }
 
 
 

}




int main(){
ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
long long int t=1;
cin>>t;
while(t--){
    solve();

}

}