#include<bits/stdc++.h>
using namespace std;

#define f(i,x,n) for (int i=x;i<n;i++)
#define F first
#define S second
#define pb push_back
#define mp make_pair
#define mt make_tuple
 
typedef long long int ll ;
typedef vector<int> vi ;

typedef vector<vector<int>> vvi ;
typedef pair<int,int> pii;

vi v(1,1);
int l=1;


void print(){
    if(l==0)return;
    cout<<v[0];
    for (int i = 1; i < l; ++i)
    {
        cout<<"."<<v[i];
    }
    cout<<"\n";
    return;
}

void find(int temp){
    for (int i = l-1; i>=0 ; i--)
    {
       if(v[i]==temp-1){
        v[i]++;
        l =  i+1;
        print();
        return;
       } 
    }

}






void solve(){
int n;
cin>>n;

print();

int temp;
cin>>temp;
for (int i = 1; i < n; ++i)
{
    cin>>temp;
    
    if(temp==1){
        if(l<v.size())v[l]=1;
        else v.pb(1);
        l++;
        print();
    }

    else find(temp);

}
 

 

}




int main(){
ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
int t=1;
cin>>t;
while(t--){
    v.resize(1);
    v[0] = 1;
    l = 1;
    solve();

}

}