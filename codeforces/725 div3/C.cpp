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
ll n,l,r;
cin>>n>>l>>r;
std::vector<ll> v(n); //vector of INT
for (int i = 0; i < n; ++i)cin>>v[i];
//sort(v.begin(),v.end());
ll count = 0;
for (int i = 0; i < n; ++i)
{
    for (int j = i+1; j < n; ++j)
    {
        if(v[i]+v[j]>=l && v[i]+v[j]<=r)count++;
    }
}
 cout<<count<<"\n";

 

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