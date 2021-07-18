#include<bits/stdc++.h>
using namespace std;

#define f(i,x,n) for (int i=x;i<n;i++)
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

typedef vector<vector<int>> vvi ;
typedef pair<int,int> pii;

ll R = 1e9+7;

ll mod(ll a,ll b){return (a%b + b)%b;}

ll binpow(ll a,ll b){
    a%=R;
    //cout<<"here"<<endl;
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
int n,m;
cin>>n>>m;
ll res = 1;

cout<<binpow(binpow(2,n)-1,m)<<"\n";
/*ll temp = binpow(2,n)-1;
cout<<temp<<endl;
cout<<binpow(temp,m)<<"\n";;*/



//cout<<res<<"\n";




/*for (int i = 0; i < n; ++i)
{
    res = res<<1;
    if(res>=R)res-=R;
   // cout<<res<<"\n";
}
res = (res-1)%R;

//cout<<res<<"\n";
ll temp = res;
for (int i = 0; i < m-1; ++i)
{
    res = res*temp;
    if(res>temp)res%=R;
}*/

 

 

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