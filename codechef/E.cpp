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
typedef vector<ll> vll ;

typedef vector<vector<int>> vvi ;
typedef pair<int,int> pii;

bool sortbysec(const pair<int,int> &a,const pair<int,int> &b)
{
    return (a.second < b.second);
}


void solve(){
int n;
cin>>n;
std::vector<pair<ll,ll>> v(n); //vector of INT
ll temp_a,temp_b;
for (int i = 0; i < n; ++i){
    cin>>temp_a>>temp_b;
    v[i] = make_pair(temp_a,temp_b);
}
std::vector<pair<ll,ll>> x=v,y=v;
vll x_f(n),x_b(n),y_f(n),y_b(n);
sort(x.begin(),x.end());
sort(y.begin(),y.end(),sortbysec);

ll total = (x[n-1].F-x[0].F)*(y[n-1].S-y[0].S);
ll min_x = total;
ll min_y = total;
ll y_min=y[n-1].S,y_max=y[0].S;
ll x_min=x[n-1].F,x_max=x[0].F;
for (int i = 0; i < n-1; ++i)
{
    y_min = min(y_min,x[i].S);
    y_max = max(y_max,x[i].S);
    x_f[i] = (x[i].F-x[0].F)*(y_max - y_min);
    //min_x = min((x[i].S-y[0].S)*(x[i].F-x[0].F + x[n-1].F-x[i+1].F),min_x);

}

y_min=y[n-1].S;
y_max=y[0].S;

for (int i = 0; i < n-1; i++)
{
    y_min = min(y_min,x[n-i-1].S);
    y_max = max(y_max,x[n-i-1].S);
    x_b[i] = (x[n-1].F-x[n-i-1].F)*(y_max - y_min);
    //min_x = min((x[i].S-y[0].S)*(x[i].F-x[0].F + x[n-1].F-x[i+1].F),min_x);
}

for (int i = 0; i < n-1; ++i)
{
    min_x = min(min_x, x_f[i]+x_b[n-i-2]);
}
//===================================
for (int i = 0; i < n-1; ++i)
{
    x_min = min(x_min,y[i].F);
    x_max = max(x_max,y[i].F);
    y_f[i] = (y[i].S-y[0].S)*(x_max - x_min);
    //min_x = min((x[i].S-y[0].S)*(x[i].F-x[0].F + x[n-1].F-x[i+1].F),min_x);

}

x_min=x[n-1].F;
x_max=x[0].F;

for (int i = 0; i < n-1; i++)
{
    x_min = min(x_min,y[n-i-1].F);
    x_max = max(x_max,y[n-i-1].F);
    y_b[i] = (y[n-1].S-y[n-i-1].S)*(x_max - x_min);
    //min_x = min((x[i].S-y[0].S)*(x[i].F-x[0].F + x[n-1].F-x[i+1].F),min_x);
}

for (int i = 0; i < n-1; ++i)
{
    min_y = min(min_y, y_f[i]+y_b[n-i-2]);
}

//===========================

 
/*for (int i = 0; i < n-1; ++i)
{
    min_y = min((x[n-1].F-x[0].F)*(y[i].S-y[0].S + y[n-1].S-y[i+1].S),min_y);

}*/
ll final = min(min_x,min_y);
cout<<final<<"\n";


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