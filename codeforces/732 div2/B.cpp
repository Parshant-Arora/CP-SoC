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
int m;
cin>>m;
vector<int> sum(m,0);
char temp;
for (int i = 0; i < n; ++i)
{
    for (int j = 0; j < m; ++j)
    {   
        cin>>temp;
        sum[j]+=temp-'a';
    }
}

for (int i = 0; i < n-1; ++i)
{
    for (int j = 0; j < m; ++j)
    {   
        cin>>temp;
        sum[j]-=temp-'a';
    }
}
for (int i = 0; i < m; ++i)
{
    temp = sum[i]+'a';
    cout<<temp;
}
cout<<"\n";
cout.flush(); 

 

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