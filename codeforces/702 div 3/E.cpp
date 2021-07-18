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
for (int i = 0; i < n; ++i)cin>>v[i];
//sort(v.begin(),v.end());
int minElementIndex = std::min_element(v.begin(),v.end()) - v.begin();
int maxElementIndex = std::max_element(v.begin(),v.end()) - v.begin();
int mini =  v[minElementIndex];
if(v[minElementIndex]==v[maxElementIndex]){
    cout<<n<<"\n";
    for (int i = 0; i < n; ++i)
    {
        cout<<i+1<<" ";
    }
    cout<<"\n";
    return;
}
int count = 0;
for (int i = 0; i < n; ++i)
{
    if(v[i]!=mini){
        count++;
        //cout<<i+1<<" ";
    }
}
cout<<count<<"\n";
for (int i = 0; i < n; ++i)
{
    if(v[i]!=mini){
        //count++;
        cout<<i+1<<" ";
    }
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