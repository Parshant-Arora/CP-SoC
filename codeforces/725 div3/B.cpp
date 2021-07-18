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
std::vector<ll> v(n); //vector of INT
ll sum=0;
for (int i = 0; i < n; ++i){
    cin>>v[i];
    sum+=v[i];
}
//sort(v.begin(),v.end());

if(sum%n!=0){
    cout<<"-1\n";
    return;
}
 
int count = 0;
for (int i = 0; i < n; ++i)
 {
     if(v[i]>sum/n)count++;
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