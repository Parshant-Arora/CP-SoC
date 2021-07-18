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
vvi v(1e5+10);
vll a(1e5+10,0);
vll s(3,0);


void label(int node,int parent){
    for(auto child:v[node]){
        if(child!=parent){
            a[child] = 3 - a[node];
            s[a[child]]++;
            label(child,node);
        }
    }
}



void solve(){
int n;
cin>>n;
int x,y;
int f;
for (int i = 1; i < n; ++i)
{
    cin>>x>>y;
    if(i==1){f=x;}
    v[x].pb(y);
    v[y].pb(x);
}
a[f] = 1;
s[1]++;
label(f,-1);

cout<<s[1]*s[2] - (n-1)<<"\n";

 

 

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