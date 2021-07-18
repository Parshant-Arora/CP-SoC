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
 std::vector<int> v(5,0);
 int temp;
 for (int i = 0; i < n; ++i)
 {
 	cin>>temp;
 	//v.push_back(temp);
 	v[temp]++;
 }

 //sort(v.begin(),v.end());

 int taxi = 0;

 taxi = v[4] + v[2]/2 + min(v[1],v[3]);
 int mini = min(v[1],v[3]);
 v[1] = v[1] - mini;
 v[2] = v[2]%2;
 v[3] = v[3] - mini;

 if(v[1]==0){taxi+= v[3] + v[2];}
 else {
 	if(v[2]==0){
 		taxi+=v[1]/4;
 		if(v[1]%4!=0)taxi++;
 		
 	}

 	else {
 		if(v[1]<2){
 			taxi++;
 		}
 		if(v[1]>=2){
 			v[1]-=2;
 			taxi++;
 			taxi+=v[1]/4;
 			if(v[1]%4!=0)taxi++;

 		}

 	}



 }


cout<<taxi<<"\n";


 

}




int main(){
ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
int t=1;
//cin>>t;
while(t--){
	solve();

}

}