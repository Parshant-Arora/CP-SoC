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
string s;
cin>>s;
int l=1,r=1;
int in=-1;
for (int i = 0; i < s.size(); ++i)
{
    if(s[i]=='a')in=i;
}
if(in==-1){
    cout<<"NO\n";
    return;
}
for (int i = 1; i <s.size() ; ++i)
{
    if(0<=in-l && s[in-l]=='a'+i)l++;
    else if(in+r<s.size() && s[in+r]=='a'+i)r++;
    else {cout<<"NO\n";return;}

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