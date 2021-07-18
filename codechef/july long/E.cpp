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

vll sum(1e5 +10,0);



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


ll pal(ll i){
ll f = i;
ll j = i;

int temp = 0;
while(!(j/10==0 && j%10==0)){
    
    if(temp){
        f*=10;
        f+=(j%10);
    }
    temp = 1;
    j/=10;
}
return f;
}


void make_array(){
    sum[1] = 1;
    for (int i = 2; i < 1e5 + 10; ++i)
    {
        sum[i] = sum[i-1] + pal(i);
    }

}



void solve(){

ll l,r;
cin>>l>>r;

ll ans = sum[r] - sum[l];


cout<<binpow(pal(l),ans)<<"\n";


 

}





int main(){
/*
file.open("input.txt");
outfile.open("output.txt");
*/
ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
int t=1;
cin>>t;
make_array();
while(t--){
    
    solve();

}

}