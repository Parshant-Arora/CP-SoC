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
int n,k;
cin>>n>>k;
std::vector<ll>ac_ind;
std::vector<ll>temp(n+10,1e10); 
int tempr;
for (int i = 0; i < k; ++i){
    cin>>tempr;
    ac_ind.pb(tempr);
}
//sort(v.begin(),v.end());
for (int i = 0; i < k; ++i)
{
    cin>>tempr;
    temp[ac_ind[i]]=tempr;
}
ll min_l=1e10;

for (int i = 1; i <= n; ++i)
{   
    min_l++;
    min_l = min(temp[i],min_l);
    temp[i] = min_l;
}
ll min_r=1e10;
for (int i = n; i > 0; i--)
{   
    min_r++;
    min_r = min(temp[i],min_r);
    temp[i] = min_r;
}

for (int i = 1; i <= n; ++i)
 {
     cout<<temp[i]<<" ";
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