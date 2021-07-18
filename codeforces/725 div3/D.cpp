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
typedef vector<bool> vb;
typedef vector<ll> vll ;

typedef vector<vector<int>> vvi ;
typedef pair<int,int> pii;

ll R = 1e9+7;

vll v(R);
vll p(R,1);


void make_seive(){
    v[1] = 0;
    v[2] = 2;
    for (int i = 4; i <R ; i+=2)
    {
        v[i] = 2;
        p[i] = 0;

    }

    for (int i = 3; i<R ; i+=2)
    {
        if(p[i]){
            v[i] = i;
            for (int j = 2; i*j < R; ++j)
            {
                p[i*j] = 0;
                v[i*j] = i;
            }
        }

    }

}


void solve(){
int a,b,k;
cin>>a>>b>>k;
make_seive();

ll cnt=0;
while(a>1){
    cnt++;
    a/=v[a];
} 
while(b>1){
    cnt++;
    b/=v[b];
}  
if(cnt>=k){
    cout<<"YES\n";
    return;
}
else cout<<"NO\n";

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