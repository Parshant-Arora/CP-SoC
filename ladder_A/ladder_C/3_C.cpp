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
 std::vector<int> f;
 std::vector<int> g;
 int temp;
 for (int i = 0; i < n; ++i)
 {
 	cin>>temp;
 	v.push_back(temp);
 }
 
 sort(v.begin(),v.end());
 int ni=0;
 g.push_back(0);
 g.push_back(1);
 if(n==1){
 	cout<<"YES\n";
 	cout<<0<<"\n\n";
 	cout<<1<<"\n";
 	cout<<v[0]<<"\n";
 	return;
 }

 if(n==2){
 	cout<<"YES\n";
 	cout<<1<<"\n";
 	cout<<v[0]<<"\n";
 	cout<<1<<"\n";
 	cout<<v[1]<<"\n";
 	return;
}



 if(v[1]==v[0] && v[2]!=v[1]){f.push_back(1);ni++;g.pop_back();}
 //if(v[1]!=v[0])g.push_back(0);
 for (int i = 2; i < n; ++i)
 {  
 	g.push_back(i);
 	if(v[i]==v[i-1] && v[i-1]==v[i-2]){
 		cout<<"NO\n";
 		return;
 	}
 	if(v[i]==v[i-1]){
 		f.push_back(i);
 		g.pop_back();
 		ni++;
 	}


 }
 
 cout<<"YES\n";
 cout<<ni<<"\n";
 
 if(ni!=0){
 	for (int i = 0; i < f.size(); ++i)
 	{
 		cout<<v[f[i]]<<" ";
 	}
 }

 cout<<"\n";

 cout<<n-ni<<"\n";
 for (int i = g.size()-1; i >=0; i--)
  {
  	cout<<v[g[i]]<<" ";
  }
 cout<<"\n";
 return;  

}




int main(){
ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
int t=1;
//cin>>t;
while(t--){
	solve();

}

}