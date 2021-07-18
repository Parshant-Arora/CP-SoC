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
// cout<<"taken "<<n<<endl;
multiset<pair<int,int>> lang;
vi aud,ind,sub;
// cout<<"here"<<endl;
ll temp;
for (int i = 0; i < n; ++i)
{
    cin>>temp;
    if()
}

int m;
cin>>m;
// cout<<"taken "<<n<<endl;
int max_a = -1;
for (int i = 0; i < m; ++i)
{   
    cin>>temp;
    aud.pb(temp);
    max_a = max(max_a,(int)lang.count(temp));
}
// cout<<"max bnde "<<max_a<<endl;
for (int i = 0; i < m; ++i)
{
    if((int)lang.count(aud[i])==max_a)ind.pb(i);
}
for (int i = 0; i < m; ++i)
{
    cin>>temp;
    sub.pb(temp);
}

int max_in,max_s=-1;
// cout<<"ind ";
for(auto t: ind){
    // cout<<t<<" ";
    int p = (int)lang.count(sub[t]);
    if(p>max_s){
        max_s = p;
        max_in = t;
    }
} 

cout<<max_in+1<<endl;;

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