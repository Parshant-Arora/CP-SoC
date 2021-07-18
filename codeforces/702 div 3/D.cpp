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

vector<int> dp(110,-1);



void label(vector<int>v,int i,int j,int k){
   if(i>j)return;
   if(i==j){
    dp[v[i]] = k;
    return;
    }

   int maxElementIndex = std::max_element(v.begin()+i,v.begin()+j+1) - v.begin();
   dp[v[maxElementIndex]] = k;
   label(v,i,maxElementIndex-1,k+1);
   label(v,maxElementIndex+1,j,k+1);
}





void solve(){
int n;
cin>>n;
std::vector<int> v(n); //vector of INT
for (int i = 0; i < n; ++i)cin>>v[i];
//sort(v.begin(),v.end());
label(v,0,n-1,0);
for (int i = 0; i < n; ++i)
{
    cout<<dp[v[i]]<<" ";
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