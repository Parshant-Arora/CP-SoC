#include<iostream>
#include<string>
#include <stdlib.h>
#include <stdio.h>
#include<vector>
#include<bits/stdc++.h>
using namespace std;


void solve(){
 int n,x,y;
 cin>>n>>x>>y;
 
 std::vector<int> v;
 int temp;
 for (int i = 0; i < n; ++i)
 {
 	cin>>temp;
 	v.push_back(temp);
 }

 if(x>y){
 	cout<<n<<"\n";
 	return;
 }

 sort(v.begin(),v.end());
 int k = 0;
 
 
 int moves = 10;
 while(1){
    if(v[k]==0)k++;
 	
 	if(v[k]>x){
 		cout<<k<<"\n";
 		return;
 	}

  	v[k] = max(0,v[k]-x);

    int start=k;
    if(v[k]==0)start++;
    	
 	for (int i = start; i < n; ++i)
	{  
	 	if(v[start]>x){
	 		cout<<start<<"\n";
	 		return;
	 	}
	 	
	 	if(i<n-1 && v[i]<=x && v[i+1]>x){
	 		v[i]+=y;
	 		break;
	 	}
	 	if(v[n-1]<=x){
	 		v[n-1]+=y;
	 		break;
	 	}
	}
 	sort(v.begin(),v.end());
 }

}




int main(){
ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
int t=1;
//cin>>t;
while(t--){
	solve();

}

}