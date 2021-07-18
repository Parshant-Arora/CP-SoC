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

vector<pair<string,string>> v;

int index(string a){
    for (int i = 0; i < v.size(); ++i)
    {
        if(v[i].F==a)return i;
    }
    return -1;
}

void update(int in,string f){v[in].S=f;}

int haha(int in){
    string a = v[in].S;
    //cout<<"our string "<<a<<endl;
    ll count=0;
    if(a.size()<4)return 0;
    for (int i = 0; i < a.size()-3; ++i)
    {
        if(a.substr(i,4)=="haha")count++;
    }
    return count;
}

void solve(){
int n;
cin>>n;

string a,b,c,d;
string last;
int in;
for (int i = 0; i < n; ++i)
{
    cin>>a>>b;
    last=a;
    in = index(a);
    if(b==":="){
        cin>>c;
        v.pb(make_pair(a,c));
    }
    else if(in!=-1){
        cin>>c;
        char temp;
        cin>>temp;
        cin>>d;
        v[in].S = v[index(c)].S + v[index(d)].S;
    }
    else{
        cin>>c;
        char temp;
        cin>>temp;
        cin>>d;
        v.pb(make_pair(a, v[index(c)].S + v[index(d)].S));
    }
}

cout<<haha(index(last))<<endl;;
for (int i = 0; i < v.size(); ++i)
{
    //cout<<v[i].F<<" "<<v[i].S<<"\n";
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