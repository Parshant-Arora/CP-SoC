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


bool iscube(ll x){
    if(x==0)return false;
    double p = cbrt(x);
    ll q = round(p);
    return q*q*q==x;
}

void solve(){
ll x;
cin>>x;
if(x==1){
    cout<<"NO\n";
    return;    
}
for (ll i = 1; i < round(cbrt(x))+10; ++i)
{   
    
    if(x-i*i*i<0)break;
    if(iscube(x-i*i*i)){
        cout<<"YES\n";
        return;
    }
}
//cout<<iscube(x-5779*5779*5779)
cout<<"NO\n";
return;
 

 

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