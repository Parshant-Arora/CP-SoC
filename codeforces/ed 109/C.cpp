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
 std::vector<int> a;
 int temp;
 
 for (int i = 0; i < n; ++i)
 {
 	cin>>temp;
 	v.push_back(temp);
 	if(temp==1)a.push_back(i);
 }

 int left=0,right=0;

 for (int i = 0; i < a.size(); ++i)
 {
 	cout<<"l r "<<left<<" "<<right<<"\n";
 	int index = a[i]-1;
 	while(0<=index && v[index]!=0){
 		index--;
 	}
 	
 	int temp = left;
 	left =  min(left,right);
 	right = temp;

 	if(index>=0)left+= a[i]-index;
 	else left+=n+10;

 	int index_1=a[i]+1;
 	
 	while(index_1<n && v[index_1]!=0){
 		index_1++;
 	}

 	if(index_1<n)right+= index_1-a[i];
 	else right+=n+10;

 	if(left<=right){
 		v[index]=1;
 	}
 	else v[index_1]=1;




 }

 

 cout<<min(left,right)<<"\n";

}




int main(){
ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
int t=1;
//cin>>t;
while(t--){
	solve();

}

}