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

vector<vector<int>> v(200010);
vector<int> path;
int m;
void check_path(int node, int parent){
    if(node==m){path.pb(m);return;}
    int path_in = path.size();
    for(auto child: v[node]){
        if(child!=parent){
            check_path(child,node);
        }
    }
    if(path.size()>path_in)path.pb(node);

}




void solve(){
int n;
cin>>n;
m = n;
//v.resize();
int temp;
for (int i = 2; i <= n ; ++i)
{
    cin>>temp;
    v[i].pb(temp);
    v[temp].pb(i);
}
for (int i = 1; i <= n; ++i)
{
    for (int j = 0; j <v[i].size() ; ++j)
    {
       // cout<<v[i][j]<<" ";
    }
    //cout<<"\n";   
}

check_path(1,-1);


 

for (int i = path.size()-1; i>=0 ; i--)
{
    cout<<path[i]<<" ";
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
//cin>>t;
while(t--){
    solve();

}

}