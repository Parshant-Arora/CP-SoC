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
ll n,k;
cin>>n>>k;
std::vector<ll> v(n); //vector of INT
for (ll i = 0; i < n; ++i)cin>>v[i];
//sort(v.begin(),v.end());
vll a;
ll count=0;
for (ll i = 0; i < 40; ++i)
{
    for (ll j = 0; j < n; ++j)
    {
        count+=(v[j]>>i)&1;
    }
    a.pb(count);
    count=0;
}

for (ll i = 0; i < 40; ++i)
{
 //cout<<a[i]<<" ";
}
//cout<<endl;
ll sum=0;
for (ll i = 0; i < 40; ++i)
{
    sum += a[i]/k +(int)(bool)(a[i]%k) ; 
}
cout<<sum<<"\n";

 

 

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