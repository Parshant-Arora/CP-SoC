#include<bits/stdc++.h>
using namespace std;

#define f(i,x,n) for (int i=x;i<n;i++)
#define F first
#define S second
#define pb push_back
#define mp make_pair
#define mt make_tuple

ifstream file;
ofstream outfile; 
#define cin file
#define cout outfile
 
typedef long long int ll ;
typedef vector<int> vi ;
typedef vector<vector<int>> vvi ;
typedef pair<int,int> pii;


void solve(){
int n,k;
cin>>n>>k;
std::vector<int> v(n+10); //vector of INT
for (int i = 1; i <=n; ++i)cin>>v[i];
//sort(v.begin(),v.end());
if(v[k]){
    cout<<k<<"\n";    
    return;
}
for (int i = (k)%n+1; i!=k ; i = i%n+1)
{
    if(v[i]){
        cout<<i<<"\n";
        return;
    }
}
}




int main(){
file.open("input.txt");
outfile.open("output.txt");
ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
int t=1;
//cin>>t;
while(t--){
    solve();
}

}