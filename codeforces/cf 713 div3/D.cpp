#include <bits/stdc++.h>
using namespace std;

void solve(){
 long long int n;
 cin>>n;
 std::vector<long long int> v;
 long long int s=0;
 int temp;
 for (long long int i = 0; i < n+2; ++i)
 {
 	cin>>temp;
 	v.push_back(temp);
 }
 //cout<<"here\n";
 sort(v.begin(),v.end());
 for (long long int i = 0; i < n; ++i)
 {
 	s+=v[i];
 }
 if(s==v[n]){
 	for (long long int i = 0; i < n; ++i)
 	{
 		cout<<v[i]<<" ";
 	}
 cout<<"\n";
 return;
 }
 s+=v[n];
 long long int diff = s-v[n+1];
 long long int x=-1;
 for (long long int i = 0; i < n+1; ++i)
 {
 	if(v[i]==diff)x=i;
 }
 if(x==-1){
 	cout<<"-1\n";
 	return;
 }
 for (long long int i = 0; i < n+1; ++i)
 {
 	if(i!=x)cout<<v[i]<<" ";
 }
cout<<"\n";
}


int main(){
 long long int t;
 cin>>t;
while(t--){
	solve();
}

}