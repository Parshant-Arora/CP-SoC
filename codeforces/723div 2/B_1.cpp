#include<iostream>
#include<string>
#include <stdlib.h>
#include <stdio.h>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

std::vector<int> v;
std::vector<pair<int,int>> dp;

int solve(int h,int i,int n){
 
 if(h<0){
    return -1e9;
 }

 if(i==n){
    return 0;
 }

 if(v[i]>=0){
    //cout<<h+v[i]<<"\n";
    int result = 1+solve(h+v[i],i+1,n);

    return 
 }

 else{
    
    if(h+v[i]>=0)return max(solve(h,i+1,n),1+solve(h+v[i],i+1,n));
    else solve(h,i+1,n);
    //return max(solve(h,i+1,n),1+solve(h+v[i],i+1,n));
 }
 

 

}




int main(){
ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
int t=1;
//cin>>t;
while(t--){
    int n;
    cin>>n;
	int temp;
     for (int i = 0; i < n; ++i)
     {
        cin>>temp;
        v.push_back(temp);
     }
    cout<<solve(0,0,n)<<"\n";

}

}