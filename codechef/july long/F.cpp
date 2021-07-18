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
typedef vector<bool> vb ;
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

vvi dfs;
vb vis;
int n;
int u,v;
int f,e,temp;
int k;

void path(int a,int parent,int b){
    if(vis[b])return;
    if(a==b){vis[b] = true;return;}
    for(auto child: dfs[a]){
        if(child==parent)continue;
        if(vis[child])continue;
        path(child,a,b);
        if(vis[child])vis[a]=true;
    }
}



void solve(){
for (int i = 0; i < n; ++i)
{
    vis.pb(0);
}

cin>>k;
cin>>f;
f--;
if(k==1){cout<<"YES\n";return;}
vis[f] = true;
for (int i = 0; i < k-1; ++i)
{
    cin>>temp;
    temp--;
    if(vis[temp])continue;
    if(i==0)e = temp;
    path(f,-1,temp);
    //cout<<f<<" to "<<temp<<"\n";
    if(vis[temp]){
        if(i==0)e = f;
        f = temp;
        continue;
    }
    path(e,-1,temp);
    //cout<<e<<" to "<<temp<<"\n";
    if(vis[temp]){
        e = temp;
        continue;
    }
    if(!vis[temp]){
        cout<<"NO\n";
        return;
    }
}
cout<<"YES\n";

for (int i = 0; i < n; ++i)
{
 //    vis[i] = false;
} 
vis.clear();
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
    cin>>n;
    dfs.resize(n);
    for (int i = 0; i < n; ++i)dfs[i].resize(0);
    
    for (int i = 1; i <= n-1; ++i)
    {
        cin>>u>>v;
        u--;
        v--;
        dfs[u].pb(v);
        dfs[v].pb(u);
    }
    // for (int i = 0; i < n; ++i)
    // {
    //     for (int j = 0; j < dfs[i].size(); ++j)
    //     {
    //         //cout<<dfs[i][j]<<" ";
    //     }
    //     //cout<<"\n";
    // }

    int q;
    cin>>q;
    while(q--){
        solve();
    }
    for (int i = 0; i < n; ++i)
    {
        dfs[i].clear();
    }
}    

}
