#include<bits/stdc++.h>
using namespace std;
#pragma GCC optimize("-O2")


//#define f(i,x,n) for (int i=x;i<n;i++)
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


ll power(ll a,ll n){
    ll s = 1;
    for (int i = 0; i < n; ++i)
    {
        s = s*a;
    }
    return s;
}


void solve(){
ll n,a,b;
cin>>n>>a>>b;
if(a==1){
    if((n-1)%b==0)cout<<"YES\n";
    else cout<<"NO\n";
    return;
}

ll in = 0;
while(power(a,in)<=n){
    if((n-power(a,in))%b==0){
        cout<<"YES\n";
        return;
    }
    in+=1;

}

cout<<"NO\n";

 

 

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