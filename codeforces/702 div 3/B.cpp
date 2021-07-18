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
std::vector<ll> v(3,0); //vector of INT
int temp;
for (int i = 0; i < n; ++i){
    cin>>temp;
    v[temp%3]++;
}
//cout<<v[0]<<" "<<v[1]<<" "<<v[2]<<endl;
//sort(v.begin(),v.end());

int res = 0;
while(!(v[0]==v[1] && v[1]==v[2])){
    for (int i = 0; i < 3; ++i)
    {
        if(v[i]>n/3){
            res+=v[i]-n/3;
            v[(i+1)%3]+=v[i]-n/3;
            v[i] = n/3;
        }
    }
    //cout<<v[0]<<" "<<v[1]<<" "<<v[2]<<endl;
}
cout<<res<<endl;

 

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