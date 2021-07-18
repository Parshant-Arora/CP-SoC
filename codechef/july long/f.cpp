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
vi height;
vb vis;
vi nodes;
int n;
int u,v;
//int f,e,temp;
int k;
int temp;
int topNode,bottomNode,maxh,minh;


void label(int node,int parent, int h){
    height[node] = h;
    for(auto child:dfs[node]){
        if(child!=parent){
            label(child,node,h+1);
            //height[node] = height[child]+1;
        }
    }
}

// void visit(int node,int parent,int h){
//     if(h==0)return;
//     vis[parent]=true;
//     visit(parent,)

// }


void path(int &a,int parent,int &b){
    //cout<<"child parent calling for "<<a+1<<" "<<parent+1<<" "<<b+1<<"\n";
    if(vis[b])return;
    if(a==b){vis[b] = true;return;}
    for(auto child: dfs[a]){
        if(child==parent)continue;
        //if(child==a)continue;
        if(vis[child])continue;
        path(child,a,b);
        if(vis[child]){
            
            vis[a]=true;
            return;
        }
    }
}



void solve(){

for (int i = 0; i < n; ++i)
{
    vis.pb(0);
}

cin>>k;

nodes.resize(k);
maxh = 0;
minh = n+1;
for (int i = 0; i < k; ++i)
{
    cin>>temp;
    temp--;
    nodes[i] = temp;
    if(height[temp]>maxh){
        maxh = height[temp];
        bottomNode = temp;
    }
    if(height[temp]<minh){
        minh = height[temp];
        topNode = temp;
    }
}
vis[bottomNode]=true;
path(bottomNode,-1,topNode);

maxh = 0;
for (int i = 0; i < k; ++i)
{
    if(vis[nodes[i]])continue;
    if(height[nodes[i]]>maxh){
        maxh = height[nodes[i]];
        bottomNode = nodes[i];
    }
}
// cout<<"top bottom "<<topNode+1<<" "<<bottomNode+1<<"\n";
if(minh==n+1){
    // cout<<"All visited\n";
    cout<<"YES\n";
    vis.clear();
    nodes.clear();
    return;
}
vis[topNode]=true;
// cout<<"here\n";
path(topNode,-1,bottomNode);
// for (int i = 0; i < k; ++i)
// {
//     if(vis[nodes[i]])cout<<"visited "<<nodes[i]+1<<"\n";    
// }

for (int i = 0; i < k; ++i)
{
    if(!vis[nodes[i]]){
        cout<<"NO\n";
        vis.clear();
        nodes.clear();
        return;
    }
}
cout<<"YES\n";


/*
1
12
1 2
2 3
2 8
1 7
7 4
4 5
1 6
6 12
6 11
11 9
11 10
5
3 5 4 7
4 5 4 7 12
5 5 4 7 12 11
4 5 4 7 8
3 4 9 10
*/






// cin>>f;
// f--;
// if(k==1){cout<<"YES\n";return;}
// vis[f] = true;
// for (int i = 0; i < k-1; ++i)
// {
//     cin>>temp;
//     temp--;
//     if(vis[temp])continue;
//     if(i==0)e = temp;
//     path(f,-1,temp);
//     //cout<<f<<" to "<<temp<<"\n";
//     if(vis[temp]){
//         if(i==0)e = f;
//         f = temp;
//         continue;
//     }
//     path(e,-1,temp);
//     //cout<<e<<" to "<<temp<<"\n";
//     if(vis[temp]){
//         e = temp;
//         continue;
//     }
//     if(!vis[temp]){
//         cout<<"NO\n";
//         return;
//     }
// }
// cout<<"YES\n";

// for (int i = 0; i < n; ++i)
// {
//    vis[i] = false;
// } 
vis.clear();
nodes.clear();
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
    height.resize(n);
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
    label(0,-1,1);
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
