#include<bits/stdc++.h>
using namespace std;

#define fr(i,x,n) for (int i=x;i<n;i++)
#define F first
#define S second
#define pb push_back
#define mp make_pair
#define mt make_tuple
 
typedef long long int ll ;
typedef vector<int> vi ;
typedef vector<bool> vb ;
typedef vector<vector<int>> vvi ;
typedef pair<int,int> pii;

vi f(1e6,-1);

bool dp(int *a,int l){
    if(l==0)return false;
    if(l==1)return true;
    if(f[l]!=-1)return f[l];
    if(a[0]==1)f[l] = (int)!dp(&a[1],l-1);
    else f[l] = (int) (dp(&a[1],l-1) || !dp(&a[1],l-1));
    return f[l];
}




void solve(){
int n;
cin>>n;
int *a = new int[n];

fr(i,0,n)cin>>a[i];

if(dp(a,n))cout<<"First\n";
else cout<<"Second\n";

 

}




int main(){
ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
int t=1;
cin>>t;
while(t--){
    fr(i,0,1e6)f[i]=-1;
    solve();

}

}