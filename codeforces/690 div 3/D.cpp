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
ll sum = 0;
for (int i = 0; i < n; ++i){
    cin>>v[i];
    sum+=v[i];
}

int d = n;
while(d>=1){
    if(sum%d!=0){
        d--;
        continue;
    }
    ll temp = 0;
    bool failed  = false;
    for (int i = 0; i < n; ++i)
    {
        temp+=v[i];
        if(temp==sum/d)temp=0;
        if(temp>sum/d){
            failed = true;
            break;
        }
    }
    if(!failed && temp==0){
        cout<<n-d<<"\n";
        return;
    }
    d--;
}
 

 

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