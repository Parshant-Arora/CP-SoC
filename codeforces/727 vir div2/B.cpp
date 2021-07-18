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

vector<int>v;
void make(string s){
    v[0]=s[0]-'a'+1;
    for (int i = 1; i < s.size(); ++i)
    {
        v[i] = v[i-1] + s[i]-'a'+1;
    }
}


void solve(){
int n,q;
cin>>n>>q;
v.resize(n);
string s;
cin>>s;
make(s);
int l,r;
while(q--){
    cin>>l>>r;
    l--;r--;
    if(l==0)cout<<v[r];
    else cout<<v[r]-v[l-1];
    cout<<"\n";
}

 

 

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