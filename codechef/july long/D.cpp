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



void solve(){
ll n;
cin>>n;
std::vector<ll> v(n); //vector of INT
ll sum = 0;
for (int i = 0; i < n; ++i){
    cin>>v[i];
    sum+=v[i];
}
//sort(v.begin(),v.end());
vll f(n),b(n);
ll g = v[0];
for (int i = 0; i < n; ++i)
{
    g = __gcd(g,v[i]);
    f[i] = g;
}

g = v[n-1];

for (int i = 0; i < n; ++i)
{
    g = __gcd(g,v[n-i-1]);
    b[i] = g;
}

ll mini = (sum-v[0])/b[n-2] + 1;

for (int i = 1; i < n-1; ++i)
{
    ll g_i = __gcd(f[i-1],b[n-i-2]);
    mini = min(mini,(sum-v[i])/g_i + 1);
}

mini = min(mini, (sum-v[n-1])/f[n-2] + 1);
cout<<mini<<"\n";
 

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