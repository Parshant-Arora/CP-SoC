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
int n;
cin>>n;

std::vector<ll> a(n); //vector of INT
std::vector<bool> vis(1e5+10,0); //vector of INT
for (int i = 0; i < n; ++i)cin>>a[i];
//sort(v.begin(),v.end());f
for (int i = 0; i < n-1; ++i)
{   
    auto p = min_element(a.begin()+i+1,a.end());
    if(a[i]>*p){
        //cout<<"here "<<a[i]<<" "<<*p<<"\n";
        int in = p - a.begin();
        if((in-i)%2)
        {
            vis[a[i]] = 1-vis[a[i]];
            vis[*p] = 1 - vis[*p];
        }
        int temp = *p;
        *p = a[i];
        a[i] = temp;
    }

}
for (int i = 0; i < n; ++i)
{
    //cout<<a[i]<<" ";
}
//cout<<"\n";
for (int i = 0; i < 1e5+10; ++i)
{
    if(vis[i]){
        cout<<"NO\n";
        return;
    }
}
 
cout<<"YES\n";
 

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