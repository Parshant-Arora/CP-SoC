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


ll R = 1e9 + 7;

ll binpow(ll a,ll b){//R defined already
    a%=R;
    
    ll res = 1;
    while(b>0){
        if(b & 1){
            res = (res*(a%R))%R;
        }
        a = (a * (a%R))%R;
        b >>= 1;
    }
    return res;
}



void solve(){
ll n;
cin>>n;
ll f;
cin>>f;
if(n==1){
    cout<<"0\n";
    return;
}
ll s;
cout<<0<<" ";
for (ll i = 0; i < n-1; ++i)
{
    cin>>s;

    ll final = s^(s|f);
    // //cout<<"s&f "<<final<<"\n";
    // ll x = log2(final)+1;
    // for (int i = 0; i < x; ++i)
    // {
    //     final = final^(1<<i);
    // }
    // //cout<<"! s&f "<<final<<"\n";
    // final = final|s;
    cout<<final<<" ";
    s = final^s;
    f = s;
}

cout<<"\n";
 

 

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