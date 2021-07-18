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
#define cinn file
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

int valu(int n){
if(n==0)return 0;
if(n==1)return 1;
if(n==2)return 1;
int sum=0;
int in=1;
int l=0;
cout<<"here"<<endl;;
while(sum<n){
    if(sum==n-1 || sum==n-2){l++;break;}
    cout<<sum<<endl;
    if((sum+2*in-1)<=n){
        
        sum+=(2*in-1);
        l++;
        in++;
        cout<<"in "<<in<<endl;
    }
    else break;
}
//cout<<"here\n";

return l+valu(n-sum);

}


void solve(){
int n;
cin>>n;
cout<<"taken "<<n<<endl;
cout<<valu(n)<<endl;;


 

 

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