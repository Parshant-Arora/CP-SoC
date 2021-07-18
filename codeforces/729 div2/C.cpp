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
vll l(1000);

ll lcm(ll a,ll b){
    return a*b/__gcd(a,b);
}


void solve(){
int n;
cin>>n;
ll sum = 0;
for (ll i = 1; i < n; ++i)
{
    for (ll j = 1; j < 1000; ++j)
    {
        if(i%l[j]!=0){
            sum = (sum + j%R)%R;
            break;
        }
    }

}
cout<<sum<<"\n";

 

 

}





int main(){
/*
file.open("input.txt");
outfile.open("output.txt");
*/
ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
int t=1;
cin>>t;
ll lc = 1;

for (int i = 1; i < 1000; ++i)
{
    lc = lcm(lc,i);
    l[i] = lc;
}
while(t--){
    solve();

}

}