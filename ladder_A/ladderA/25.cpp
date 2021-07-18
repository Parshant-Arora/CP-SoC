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

std::vector<bool> v(110,0); //vector of INT
int m;

void solve(){
int p;
cin>>p;
int temp;

for (int i = 0; i < p; ++i){
    cin>>temp;
    
    v[temp]=true;
}
//sort(v.begin(),v.end());

 

}





int main(){
/*
file.open("input.txt");
outfile.open("output.txt");
*/
ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
int t=1;
cin>>t;
m = t;
int s = 2;
while(s--){
    solve();
}
for (int i = 1; i <= m; ++i)
{
    if(!v[i]){cout<<"Oh, my keyboard!\n";return 0;}
}
cout<<"I become the guy.\n";

}