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
int k,n,m;
cin>>k>>n>>m;
std::vector<ll> a(n),b(m); //vector of INT
vll c;
for (int i = 0; i < n; ++i)cin>>a[i];
for (int i = 0; i < m; ++i)cin>>b[i];
//sort(v.begin(),v.end());
int ip=0,im=0;
while(ip<n ){
    if(ip>=n || im>=m){
        cout<<"-1\n";
        return;
    }
    if(a[ip]==0){c.pb(0);k++;ip++;continue;}
    else if(a[ip]<=k){c.pb(a[ip]);ip++;continue;}
    else{
        while(a[ip]>k){
            if(im>=m){
                cout<<"-1\n";
                return;
            }
            if(b[im]==0){c.pb(0);k++;im++;continue;}
            else if(b[im]<=k){c.pb(b[im]);im++;continue;}
            else{
                cout<<"-1\n";
                return;
            }

        }

    }


}
if(c.size()<n+m){
    while(im<m){
      if(b[im]==0){c.pb(0);k++;im++;continue;}
      else if(b[im]<=k){c.pb(b[im]);im++;continue;}
      else{
        cout<<"-1\n";
        return;
      }  

    }
}
for (int i = 0; i < n+m; ++i)
{
    cout<<c[i]<<" ";
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