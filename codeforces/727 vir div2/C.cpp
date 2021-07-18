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
ll n,k,x;
cin>>n>>k>>x;
std::vector<ll> v(n); //vector of INT
vll need;
for (int i = 0; i < n; ++i)cin>>v[i];
sort(v.begin(),v.end());
ll grp=0;
for (int i = 1; i < n; ++i)
{
    if(v[i]-v[i-1]>x){
        need.pb((v[i]-v[i-1]-1)/x);
        grp++;
    }
}
grp++;
sort(need.begin(),need.end());
for (int i = 0; i < need.size(); ++i)
 {
     if(k>=need[i]){k-=need[i];grp--;}
 } 
cout<<grp<<"\n";
 

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