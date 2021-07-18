#include<bits/stdc++.h>
using namespace std;

#define f(i,x,n) for (int i=x;i<n;i++)
#define F first
#define S second
#define pb push_back
#define mp make_pair
#define mt make_tuple
 
typedef long long int ll ;
typedef vector<int> vi ;

typedef vector<vector<int>> vvi ;
typedef pair<int,int> pii;


ll max_sum(int in,int n,vector<ll>v){
ll sum = 0,final = 0;

for (int i = in; i <= n ; ++i)
{
    sum = max(v[i],sum+v[i]);
    final = max(final,sum);
}

return final;

}



void solve(){
int n;
cin>>n;
std::vector<ll> v(n+1); //vector of INT
ll ysr = 0,ahmd=0;
v[0] = 0;
for (int i = 1; i <= n; ++i){
    cin>>v[i];
    ysr+=v[i];
}
//sort(v.begin(),v.end());

/*for (int i = 1; i <= n; ++i)
{
    v[i]+=v[i-1];
}*/

//int m=0,M=0;



/*for (int i = 1; i<=n; ++i)
{
    if(v[i]>v[M] && i>m)M = i;
    if(v[i]<v[m] && i<M)m = i;
    
}*/
ahmd = max(max_sum(1,n-1,v),max_sum(2,n,v));

/*if(m==0 && M==n){
    ahmd = max(v[n]-v[1],v[n-1]-v[0]);
}*/
//cout<<ahmd<<" "<<ysr<<"\n";
if(ahmd>=ysr)cout<<"NO\n";
else cout<<"YES\n"; 

}




int main(){
ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
int t=1;
cin>>t;
while(t--){
    solve();

}

}