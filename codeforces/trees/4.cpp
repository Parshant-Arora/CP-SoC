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
vector<vector<int>> v(210);
vector<pair<string,int>> d;
vi ans(210);

void height(int node,int parent){
    int maxh = 0;
    for(auto child:v[node]){
        if(child!=parent){
            height(child,node);
            maxh = max(maxh,ans[child]);
        }
    }
    ans[node] = maxh + 1;
}


void solve(){
int n;
cin>>n;
for (int i = 0; i < n; ++i)
{
    string a,b,c;
    cin>>a>>b>>c;
    transform(a.begin(), a.end(), a.begin(), ::tolower);
    transform(c.begin(), c.end(), c.begin(), ::tolower);
    int temp_a=-1,temp_c=-1;
    for (int i = 0; i < d.size(); ++i)
    {
        if(d[i].F==a)temp_a=d[i].S;
        if(d[i].F==c)temp_c=d[i].S;
    }
    if(temp_a==-1){d.pb(make_pair(a,d.size()));temp_a = d.size()-1;}
    if(temp_c==-1){d.pb(make_pair(c,d.size()));temp_c = d.size()-1;}

    v[temp_a].pb(temp_c);
    v[temp_c].pb(temp_a);

}

height(1,-1);
int maxh = 1;
for(auto c: ans){
    maxh = max(maxh,c);
}
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