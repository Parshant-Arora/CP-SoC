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


vector<vector<int>> v(2010);
vector<int> ans(2010);
vector<int> root;

void fill_height(int node,int parent){
    if(v[node].size()==1 && parent!=-1){
        ans[node]=1;
        return;
    }
    for(auto child: v[node]){
        if(child!=parent){
            fill_height(child,node);
        }
    }
    int maxh = 0;
    for(auto child: v[node]){
        if(child!=parent){
            maxh = max(maxh,ans[child]);
        }
       
    }
     ans[node] = 1 + maxh;
}





void solve(){
int n;
cin>>n;
int temp;
for (int i = 0; i < n; ++i)
{   
    cin>>temp;
    if(temp!=-1){
        v[i].pb(temp-1);
        v[temp-1].pb(i);
    }
    else root.pb(i);
}
/*
cout<<"here"<<endl;
for (int i = 0; i < n; ++i)
{
    for (int j = 0; j < v[i].size(); ++j)
    {
        cout<<v[i][j]<<" ";
    }
    cout<<"\n";
}*/
//cout<<"here2"<<endl;
int maxh=1;
for (int i = 0; i < root.size(); ++i)
{
    fill_height(root[i],-1);
    maxh = max(maxh,ans[root[i]]);
    //cout<<ans[i]<<" ";
}
for (int i = 0; i < n; ++i)
{
    //cout<<ans[i]<<" ";
}
cout<<"\n";
cout<<maxh<<"\n";


 

 

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