#include<iostream>
#include<string>
#include <stdlib.h>
#include <stdio.h>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

std::vector<long long int> v;


long long int solve(long long int n){
 cout<<"checking "<<n<<"\n";
 /*std::vector<long long int> v(n); //vector of long long int
 for (long long int i = 0; i < n; ++i)cin>>v[i];*/
 //sort(v.begin(),v.end());
 if(n==0)return 0;
 if(n<10)return 1;


 if(v[n]!=-1){
    return v[n];
 }
 long long int m = n;
 long long int mini = 1e18;
 while(!(m/10==0 && m%10==0)){
    if(v[n-m%10]==-1)v[n-m%10] = solve(n-m%10);
    mini = min(mini,v[n-m%10]);
    m/=10;
 }
 
 v[n] = mini + 1;
 return v[n];

 

}




int main(){
ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
long long int t=1;
//cin>>t;
while(t--){
    long long int temp =-1;
    long long int n;
    cin>>n;
    for (long long int i = 0; i < n+1; ++i)
    {
        v.push_back(temp);
    }
    cout<<solve(n)<<"\n";

}

}