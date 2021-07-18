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
 std::vector<int> v;
 int temp;
 for (int i = 0; i < n; ++i)
 {
    cin>>temp;
    v.push_back(temp);
 }
 
 sort(v.begin(),v.end());

 int pk=-1;

 for (int i = 0; i < n; ++i)
 {
    if (v[i]>0)
    {
       pk = i;
       break;
    }
 }

 if(pk==-1){
   cout<<n<<"\n";
   return;
 }

 for (int i = 1; i <= pk; ++i)
 {
    if((v[i]-v[i-1])<v[pk]){
      cout<<pk<<"\n";
      return;
    }
 }
 cout<<pk+1<<"\n";
 return;
 

 

}




int main(){
ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
int t=1;
cin>>t;
while(t--){
    solve();

}

}