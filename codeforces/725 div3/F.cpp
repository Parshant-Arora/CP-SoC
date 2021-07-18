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


ll dig(ll l,ll r,int m){
    if(l==0 && r==0)return 0;
    ll count = 0;
    count = (((r/10) - (l/10))*9 + r%10 - l%10)*m;
    return count + dig(l/10,r/10,m+1);
}



void solve(){
ll l,r;
cin>>l>>r;
cout<<dig(l,r,1)<<endl;
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