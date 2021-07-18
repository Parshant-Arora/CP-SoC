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


bool ok(char*a,int l){
    for (int i = 0; i < l; ++i)
    {
        if(a[i]!='z')return true;
    }
    return false;

}

void add(char *a,int l){
    a[0]= a[0] + 1;


    for (int i = 0; i < l; ++i)
    {
        if(a[i]=='z'+1){
            a[i]='a';
            a[i+1]=a[i+1]+1;
        }
    }


}

void reset(char*a, int l){
    for (int i = 0; i < l; ++i)
    {
        a[i]='a';
    }

}

void solve(){
int n;
cin>>n;
string s;
cin>>s;
char a[4];
a[0]='a';
a[1]='a';
a[2]='a';
a[3]='a';
bool done = false;
for(int l=1;l<=3;l++){
    while(ok(a,l)){
    string our_string = "";
    for (int i = 0; i < l; ++i)
    { 
        our_string = our_string + a[i];
    }
    
    
    reverse(our_string.begin(), our_string.end());
    //cout<<our_string<<"\n";
    if(s.find(our_string)==std::string::npos){
        done = true;
        cout<<our_string<<"\n";
        return;
    }
    add(a,l);
    for (int i = 0; i < 3; ++i)
    {
      //  cout<<a[i]<<" ";
    }
    //cout<<"\n";
    
}
reset(a,l);
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