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



void solve(){
int n;
cin>>n;
std::vector<ll> v(n+10,0); //vector of INT
ll temp = 0;
for (int i = 0; i < n; ++i){
    cin>>temp;
    v[temp]++;
}
//sort(v.begin(),v.end());
ll sum=0;
for (int i = 1; i <= n; ++i)
{
    ll a = v[i];
    sum+= a*(a-1)*(a-2)/6;
}
//cout<<sum<<"\n";
if(n>=2){
    for (int i = 1; i <= n-1; ++i)
    {
        ll a = v[i],b=v[i+1];
        sum+=  a*(a-1)*(b)/2 + b*(b-1)*(a)/2;
    }
}
//cout<<sum<<"\n";
if(n>=3){
    for (int i = 1; i<=n-2; i++)
    {   
        ll a = v[i],b = v[i+1],c = v[i+2];
        sum += a*b*c + a*(a-1)*c/2 + a*c*(c-1)/2;
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
while(t--){
    solve();

}

}