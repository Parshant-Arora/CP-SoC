#include<bits/stdc++.h>
using namespace std;
#pragma GCC optimize("-O2")


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
typedef vector<ll> vll ;


typedef vector<vector<int>> vvi ;
typedef pair<int,int> pii;



void solve(){
int n;
cin>>n;
//std::vector<ll> v(n); //vector of INT
int *a = new int[n];
for (int i = 0; i < n; ++i)cin>>a[i];
sort(a,a+n);
int maxi = 1;
for (int i = 0; i < n; ++i)
{
    int k = upper_bound(a,a+n,a[i]+5) - a;
    maxi = max(maxi,k-i);
}
 
cout<<maxi<<"\n";

 

}





int main(){
/*
file.open("input.txt");
outfile.open("output.txt");
*/
ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
int t=1;
//cin>>t;
while(t--){
    solve();

}

}