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
std::vector<int> a(n),b(n); //vector of INT
ll suma=0,sumb=0;
for (int i = 0; i < n; ++i){
    cin>>a[i];
    suma+=a[i];
}
for (int i = 0; i < n; ++i){
    cin>>b[i];
    sumb+=b[i];
}
if(suma!=sumb){
    cout<<"-1\n";
    return;
}
//sort(v.begin(),v.end());




vector<int> f;

//cout<<2*suma -a[n-1]-b[n-1]<<"\n";
for (int i = 0; i < n; ++i)
{
    if(a[i]>=b[i]){
        int diff = a[i]-b[i];
        
        for (int j = i+1; j < n; ++j)
        {
            if(a[j]<b[j] && diff>0){
                int temp = min((b[j]-a[j]),diff);
                for (int k = 0; k < temp; ++k)
                {
                    f.pb(i+1);
                    f.pb(j+1);
                }
                
                diff-= temp;
                a[j]+=temp;
                a[i]-=temp;
            }
        }
    }
    
}

for (int i = n-1; i>=0; i--)
{
    if(a[i]>=b[i]){
        int diff = a[i]-b[i];
        
        for (int j = i-1; j >= 0; j--)
        {
            if(a[j]<b[j] && diff>0){
                for (int k = 0; k < min((b[j]-a[j]),diff); ++k)
                {
                    f.pb(i+1);
                    f.pb(j+1);
                }
                int temp = min((b[j]-a[j]),diff);
                diff-= temp;
                a[j]+=temp;
                a[i]-=temp;
            }
        }
    }
    
}
cout<<f.size()/2<<"\n";
for (int i = 0; i < f.size(); i+=2)
{
    cout<<f[i]<<" "<<f[i+1]<<"\n";
}
 

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