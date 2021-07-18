#include<bits/stdc++.h>
using namespace std;

#define f(i,x,n) for (int i=x;i<n;i++)
#define F first
#define S second
#define pb push_back
#define mp make_pair
#define mt make_tuple

/* 
ifstream file;
ofstream outfile; 
#define cin file
#define cout outfile
*/


typedef long long int ll ;
typedef vector<int> vi ;

typedef vector<vector<int>> vvi ;
typedef pair<int,int> pii;



void solve(){
int n;
cin>>n;
std::vector<ll> v(n); //vector of INT
for (int i = 0; i < n; ++i)cin>>v[i];
//sort(v.begin(),v.end());
int minIndex = min_element(v.begin(),v.end())-v.begin();
int maxIndex = max_element(v.begin(),v.end())-v.begin(); 
int a = min(minIndex+1,n-minIndex);
int b = min(maxIndex+1,n-maxIndex);
//cout<<max(a,b)<<"\n";
int p = min(max(minIndex+1,maxIndex+1),max(n-minIndex,n-maxIndex));
int q = min(minIndex+1 + n-maxIndex,n-minIndex + maxIndex+1);
cout<<min(p,q)<<"\n";
}





int main(){
/*
file.open("input.txt");
outfile.open("output.txt");
*/
ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
int t=1;
cin>>t;
while(t--){
    solve();

}

}