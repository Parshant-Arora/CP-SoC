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

vvi adj(1010);

void check(){

}


void solve(){
int n;
cin>>n;
int temp;
for (int i = 2; i <= n; ++i)
{
    cin>>temp;
    adj[temp].pb(i);
}

for (int i = 1; i <= n; ++i)
{
    for (int j = 0; j < adj[i].size(); ++j)
    {
    //    cout<<adj[i][j]<<" ";
    }
    //cout<<"\n";
}

for (int i = 1; i <= n; ++i)
{
    int count = 0;
    if(adj[i].size()==0)continue;
    for (int j = 0; j<adj[i].size() ; ++j)
    {
        if(adj[adj[i][j]].size()==0)count+=1;
    }
    //cout<<count<<"\n";
    if(count<3){cout<<"No\n";return;}
}
cout<<"Yes\n";


 

 

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