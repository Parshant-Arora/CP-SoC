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

void solve(){
int n,m;
cin>>n>>m;
std::vector<ll> v(n),p(m),l(n),r(n); //vector of INT
for (int i = 0; i < n; ++i)cin>>v[i];
for (int i = 0; i < m; ++i)cin>>p[i];
//sort(v.begin(),v.end());
ll left = R;
for (int i = 0; i < n; ++i)
{
    if(v[i]==1)left = i;
    l[i] = abs(i - left);
}

ll right = R;
for (int i = n-1; i>=0 ; i--)
{
    if(v[i]==2)right = i;
    r[i] = abs(i-right);
}
for (int i = 0; i < m; ++i)
{
    if (p[i]==1)cout<<"0 ";
    else if(min(l[p[i]-1],r[p[i]-1])>1e8){
        cout<<"-1 ";
    }
    else cout<<min(l[p[i]-1],r[p[i]-1])<<" ";
}
cout<<"\n";

 

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