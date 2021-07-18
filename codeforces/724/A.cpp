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

void print(int d,int g){
    
    
    for (int i = 1; i <=d/g ; ++i)
    {
        cout<<g*i<<" ";
    }
    cout<<"\n";

}



void solve(){
int n;
cin>>n;
std::vector<int> v(n); //vector of INT
for (int i = 0; i < n; ++i)cin>>v[i];
sort(v.begin(),v.end());
if(v[0]*v[n-1]<0){
    cout<<"NO\n";
    return;
}

int g = v[0];
for (int i = 1; i < n; ++i)
{
    g = __gcd(g,v[i]);
}


if(v[0]<0){
    cout<<"NO\n";
    return;
}

else{
    int k = v[n-1]/g;
    if(v[0]==0){
        k++;
    }
    if(k<=300){
       cout<<"YES\n";
       
       cout<<k<<"\n";
       if(v[0]==0){
        cout<<"0 ";
       }       
       print(v[n-1],g);
        return;  
    }
    else{
         cout<<"NO\n";
        return;
    }

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