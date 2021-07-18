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
 std::vector<long long int> v(n);
 for (long long int i = 0; i < n; ++i)cin>>v[i];
 
 multiset<long long int> s;
 
 long long int h=0,count=0;
 for (long long int i = 0; i < n; ++i)
 {
    if(v[i]>=0){
      count++;
      h+=v[i];
    }

    else{
      if(h+v[i]>=0){
         count++;
         s.insert(v[i]);
         h+=v[i];
      }
      else{

         if(s.empty()){
            continue;   
         }
         //s.erase(s.begin());
         else if(*s.begin()<v[i]){
            h+=v[i]-*s.begin();
            s.erase(s.find(*s.begin()));
            s.insert(v[i]);
         }
         else{continue;}


      }

    }

 }

 cout<<count<<"\n";
 

 

}




int main(){
ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
long long int t=1;
//cin>>t;
while(t--){
    solve();

}

}